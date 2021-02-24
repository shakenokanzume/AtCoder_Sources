#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)



const int lim = 1000000007;

// 条件を満たすかを判定する配列
// aが文字列Sに含まれる数字の格納配列、bが112~999までのループで使っている配列
bool func(vector<int> a, vector<int> b){
    int len = a.size();
    bool is = true;
    for(int i = 0; i < len; i++){
        if(a[i] - b[i] < 0){
            is = false;
            break;
        }
    }
    return is;
}

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();

    // Sが1、２桁の場合は例外処理
    if(N == 1){
        if(S == "8") cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    if(N == 2){
        int val = stoi(S);
        reverse(S.begin(), S.end());
        int val_ano = stoi(S);
        if(val % 8 == 0 || val_ano % 8 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }

    // 下4桁以降は必ず8の倍数になるので、8の倍数になるかどうかを判定するのは下3桁が8の倍数であるかどうかを見ればよい。
    // 112~999までの中で8の倍数をすべて三つけて、それをSに含まれる文字列で作れるかを見る。
    int mx = 999;

    // 112以上999以下の8の倍数をすべて求めてvector配列に格納
    vector<int> step;
    for(int i = 112; i <= mx; i++){
        if(i % 8 == 0) step.push_back(i);
    }

    // Sに含まれる数字の個数をカウントし、vector配列に格納
    vector<int> cnt_num(10, 0);
    rep(i, N) cnt_num[S[i] - '0']++;

    // 999以下の8の倍数すべてにおいて、含まれる数字の個数を数える。
    for(int p : step){
        int num = p;
        vector<int> cnt_up(10, 0);
        do{
            int val = num % 10;
            cnt_up[val]++;
            num /= 10;
        }while(num > 0);

        if(func(cnt_num, cnt_up)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;

}