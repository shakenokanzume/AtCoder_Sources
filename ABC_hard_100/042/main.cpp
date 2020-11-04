clear
    //1つのリズムの時間を0.1秒にする
    //1つの音の時間は0.25秒とする

    //送信側の記述

    fs = 48000;               // サンプリング周波数
t = linspace(0, 1, (fs + 1)); // 1秒間に48000サンプル
t_01 = t(1, 1
         : fs / 10); // 0.1秒にした
t_0025 = t(1, 1
           : fs / 40); //0.025秒にした

alp_list = [ "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" ]; // アルファベット格納

//使用する音の種類を今回は3種類とした
sound_variety = 3;
alp_hz = linspace(3000, 3000 + (sound_variety - 1) * 10, 3); // アルファベットに対応する周波数

//使用する音3種類作成
for
    i = 1 : 3 doremi(i,
                     :) = sin(t_0025 * alp_hz(i) * (2 * % pi));
end
    //各リズムの先頭に置く、区切れのための音を作成
    dif = sin(t_0025 * 2700 * (2 * % pi));

cnt = 0;
finished = % f;
i = 1;
for k = 1:3
    for l = 1:3
        for m = 1:3
            alp(i, :) = [dif, doremi(k,:), doremi(l,:),doremi(m,:)];
i = i + 1;
cnt = cnt + 1;
if (i > 26)
    finished = % t;
break;
end
    end if (finished) break;
end
    end if (finished) break;
end
    end

        //今回は、3つの音でリズムを作るので、手作業で26パターン作成
        /*
for i = 1:26
    alp(i, :) = sin(t_02*alp_hz(i)*(2*%pi)); // 行：アルファベット、列：時間軸
end
*/

        h_n = 0;                    // 0Hz(無音)
x_n = sin(t_01 * h_n * (2 * % pi)); // 無音

sumple = matrix((alp.'), 1, size(alp,1)*size(alp,2)); // 横一列にする(照合用音声) [sound_A, sound_B, ...]
st_sound = sin(t_01*2800*(2*%pi)); // 信号はじまり(2800Hz)
fin_sound = sin(t_01*2900*(2*%pi)); // 信号おわり(2900Hz)

in = input("文字列を入力してください: ", "string");
words = ascii(in);

//入力系列の作成
abcd = st_sound;
for i = 1:size(words, 2)
    //入力した文字を、ascii変換の後、Aを1に合わせる
    abcd = [abcd, alp((words(i) - 64), :)];
end
abcd = [abcd, fin_sound];

// 送信音声(HELLO)
wavwrite(abcd, fs, "sound_abcd"); // 送信音声書き出し


//受信側の記述

[x, fs] = wavread("sound_abcd.wav"); // 音声を受信


noise = rand(1,length(x),"normal"); // 雑音の生成
x = x + noise; // xに雑音を加えた模擬受信信号


// 送信信号をxとする
/*
echo = (0:0.2*fs)/fs;
p1 = log(20*echo+1)*500+sin(echo);
p2 = exp(-100000*(sin(p1)^2)) * 0.2;
x = convol(p2.*exp(-echo*4),x);
*/
// 残響が加わった模擬受信信号

[hz] = iir(2,'bp','butt',[0.05, 0.07],[0,0]);
            // 2次のフィルタ
            // バンドパス
            // バターワースフィルタ (通過帯域が数学的に可能な限り平坦な周波数特性)
            // 2400-3360Hzを通過帯域とする (fs*0.05 ~ fs*0.07)

[x,zf] = filter(hz.num, hz.den, x);

//フィルタ通過前のパワースペクトル表示部分
/*
X = abs(fft(x)).^2/(length(x)^2);
freq_X = (0:length(X) - 1) * fs / length(X);
subplot(3, 1, 2);
plot2d('nl', freq_X,X)  //通過前のパワースペクトル
xlabel('Frequency (Hz)')
ylabel('Power')
*/

time_x = (0:length(x)-1)/fs; // 音声の総時間[s]

//音声波形の表示部分
/*
subplot(3,1,1);
plot(time_x, x)
xlabel('Time (s)')
ylabel('Amplitude')
*/

playsnd(x ,fs) // 受信音声再生

[corr_xy, lags] = xcorr(x, st_sound); // 相関関数
[mx, k] = max(corr_xy); // ピーク時の添え字を取得
strt = lags(k); //信号の開始点を記録
/*
subplot(3,1,2);
plot(lags/fs, corr_xy)
disp(strt/fs) // 信号開始の時間[s]
*/

[corr_xy, lags] = xcorr(x, fin_sound); // 相関関数
[mx, k] = max(corr_xy); // ピーク時の添え字を取得
fin = lags(k); //信号の終了点を記録
/*
subplot(3,1,2);
plot(lags/fs, corr_xy)
disp(fin/fs) // 信号終了の時間[s]
*/

i = 1;
out = 0;
while (1)
    y = x(strt + i*fs/10 : strt + (i+1)*fs/10 - 1); // 音声を0.1秒ごとに切り出し
    [corr_xy, lags] = xcorr(sumple,y); // 相関関数
    [mx, k] = max(corr_xy); // ピーク時の添え字を取得
    lags_k = lags(k)/fs; //相関関数がmaxになる時間[s]
    for j = 1:26
        if (0.1*j - 0.15 <= lags_k & lags_k < 0.1*j - 0.05)
            out = [out, ascii(alp_list(j))];
            break;
        end
    end
    /*
    subplot(3,1,3);
    plot(lags/fs, corr_xy)
    */
    i = i + 1;
    if (strt + (i+1)*fs/10 - 1 >= fin + 2400)
        break; // 信号終了になったらおしまい
    end
end

out_ans = ascii(out(2:size(out, 2)));
disp(out_ans)
