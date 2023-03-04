#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    pair<int, int> lefttop;
    pair<int, int> rightbottom;
    int cnt = 0;
    rep(i, 10){
        rep(j, 10){
            char c; cin >> c;
            if(cnt == 0 && c == '#'){
                lefttop = make_pair(i+1, j+1);
                cnt++;
            }
            if(cnt != 0 && c == '#'){
                rightbottom = make_pair(i+1, j+1);
            }
        }
    }
    cout << lefttop.first << " " << rightbottom.first << endl;
    cout << lefttop.second << " " << rightbottom.second << endl;
    return 0;
}