#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

string func(ll N){
    string s;
    while(N != 0){
        if(N % 2 == 0){
            N /= 2;
            s.push_back('B');
        }else{
            N -= 1;
            s.push_back('A');
        }
    }
    return s;
}
int main(){
    ll N;
    cin >> N;
    string ans;
    ans = func(N);
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}