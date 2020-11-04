#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S;
    cin >> S;
    int ans = 0;
    int N = (int)S.size();
    rep(i, N){
        int cnt = 0;
        if(S[i] == S[i+1] && S[i] == 'R'){
            cnt++;
            while(S[i] == S[i+1] && S[i] == 'R' && i < N){
                i++;
                cnt++;
            }
        }else if(S[i] == 'R'){
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}