#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int X;
    cin >> X;
    int ans = 0;
    //500円にできるだけ両替
    ans += 1000 * (X / 500);
    X %= 500;
    //5円にできるだけ両替
    ans += 5 * (X / 5);
    cout << ans << endl;
    return 0;
}