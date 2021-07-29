#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    int ans = 0;
    rep(i, N){
        int a;
        cin >> a;
        if(a > 10){
            ans += (a-10);
        }
    }
    cout << ans << endl;
    return 0;
}