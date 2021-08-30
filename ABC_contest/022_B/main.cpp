#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> type(100001, 0);
    rep(i, N){
        int a;
        cin >> a;
        type[a]++;
    }
    int ans = 0;
    for(int i = 1; i <= 100000; i++){
        if(type[i] >= 2) ans += (type[i]-1);
    }
    cout << ans << endl;
    return 0;
}