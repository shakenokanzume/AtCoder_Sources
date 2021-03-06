#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> a, b;
    rep(i, N){
        int A, B;
        cin >> A >> B;
        a.emplace_back(A, i);
        b.emplace_back(B, i);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    if(a[0].second == b[0].second){
        ans = min({max(a[0].first, b[1].first), max(a[1].first, b[0].first), a[0].first + b[0].first});
    }else{
        ans = max(a[0].first, b[0].first);
    }

    cout << ans << endl;
    return 0;
    
}