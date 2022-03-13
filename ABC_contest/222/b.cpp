#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    int P;
    cin >> P;
    int cnt = 0;
    rep(i, N){
        int a;
        cin >> a;
        if(a < P) cnt++;
    }
    cout << cnt << endl;
    return 0;
}