#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string S;
    cin >> S;

    int N = (int)S.size();

    // 末尾からの０の個数をカウント
    int cnt = 0;
    for(int i = N-1; i >= 0; i--){
        if(S[i] == '0') cnt++;
        else break;
    }

    reverse(S.begin(), S.end());
    rep(i, cnt) S.push_back('0');

    string T = S;
    reverse(S.begin(), S.end());
    if(T == S) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}