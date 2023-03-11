#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int cnt = 0;

int func(int num){
    if(num/10 == 0) return num;
    vector<int> a;
    while(num != 0){
        a.push_back(num % 10);
        num /= 10;
    }
    // 積
    int ans = 1;
    rep(i, a.size()){
        ans *= a[i];
    }
    cnt++;
    return func(ans);
}

int main(){
    int ans = 0;
    for(int i = 0; i <= 1e6; i++){
        func(i);
        if(cnt == 4){
            ans++;
        }
        cnt = 0;
    }
    cout << ans << endl;
}