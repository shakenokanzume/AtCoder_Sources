#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    string t; cin >> t;

    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, -1, 0, 1};

    int cnt = 0;
    int x = 0, y = 0;
    rep(i, n){
        if(t[i] == 'S'){
            x += dx[cnt%4];
            y += dy[cnt%4];
        }else if(t[i] == 'R') cnt++;
    }
    cout << x << " " << y << endl;
    return 0;
}