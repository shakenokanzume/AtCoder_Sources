#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int A, B;
    cin >> A >> B;

    int ans = 0;

    for(int i = A; i <= B; i++){
        if(i * 2 <= B){
            ans = max(ans, A);
        }
    }
    cout << ans << endl;
    return 0;
}