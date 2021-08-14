#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    // 花びらを毟る必要のある枚数を格納
    int ans = 0;
    rep(i, N){
        int a;
        cin >> a;
        while(a % 3 == 2 || a % 2 == 0){
            a--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}