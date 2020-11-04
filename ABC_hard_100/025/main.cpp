#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

//time以上、time+f以下の値の中に、必ず1つfで割り切れる値が存在するので、その値を見つける
int func(int time, int f){
    int val;
    for(int i = time; i < time+f; i++){
        if(i % f == 0){
            val = i;
            break;
        }
    }
    return val;
}

int main(){
    int N;
    cin >> N;
    vector<int> c(N, 0), s(N, 0), f(N, 0);
    rep(i, N-1){
        cin >> c[i] >> s[i] >> f[i];
    }

    //iを出発駅としたときの、N駅にたどり着くための時間
    vector<int> time(N, 0);
    rep(i, N-1){
        for(int j = i; j < N-1; j++){
            //出発駅限定の操作
            if(j == i) time[i] = s[j];
            else{ //今いる駅を始発で出発できるか、そうでないか
                time[i] = max(s[j], func(time[i], f[j]));
            }
            //次の駅にいくまでにかかる所要時間
            time[i] += c[j];
        }
    }
    rep(i, N) cout << time[i] << endl;
    return 0;
}