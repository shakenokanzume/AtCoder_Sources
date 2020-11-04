#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();

    for(int bit = 0; bit < (1 << (N-1)); bit++){
        int sum = (S[0] - '0');
        string ans;
        ans.push_back(S[0]);
        for(int i = 0; i < N-1; i++){
            if(bit & (1 << i)){
                sum += (S[i+1] - '0');
                ans.push_back('+');
                ans.push_back(S[i+1]);
            }else{
                sum -= (S[i+1] - '0');
                ans.push_back('-');
                ans.push_back(S[i+1]);
            }
        }
        if(sum == 7){
            cout << ans << "=7" << endl;
            return 0;
        }
    }
}