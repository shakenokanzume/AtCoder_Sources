#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    // 入れ替えをした回数を記録
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(cnt >= K) break;
        // 交換対象の選択
        int min = S[i];
        int min_i = i;
        for(int j = i; j < N; j++){
            // アルファベットが小さく、かつインデックス番号が大きいものを候補として選ぶ
            if(min >= S[j]){
                min = S[j];
                min_i = j;
            }
        }
        if (i != min_i)
        {
            char temp = S[i];
            S[i] = S[min_i];
            S[min_i] = temp;
            cnt++;
        }
    }
    cout << S << endl;
    return 0;
}