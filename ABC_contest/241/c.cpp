#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N; cin >> N;
    vector<string> s(N);
    rep(i, N) cin >> s[i];

    string is = "No";
    rep(i, N) rep(j, N){
        // 横向き
        int cnt = 0;
        if(j + 5 < N){
            rep(k, 6) if (s[i][j + k] == '#') cnt++;
            if (cnt >= 4)
            {
                is = "Yes";
            }
        }

        // 縦向き
        if(i + 5 < N){
            cnt = 0;
            rep(k, 6) if (s[i + k][j] == '#') cnt++;
            if (cnt >= 4)
            {
                is = "Yes";
            }
        }

        // ななめ（右下がり）
        if(i + 5 < N && j + 5 < N){
            cnt = 0;
            rep(k, 6) if (s[i + k][j + k] == '#') cnt++;
            if (cnt >= 4)
            {
                is = "Yes";
            }
        }

        // ななめ（右上がり）
        if(i-5 >= 0 && j + 5 < N){
            cnt = 0;
            rep(k, 6) if (s[i - k][j + k] == '#') cnt++;
            if (cnt >= 4)
            {
                is = "Yes";
            }
        }
    }
    cout << is << endl;
    return 0;
}