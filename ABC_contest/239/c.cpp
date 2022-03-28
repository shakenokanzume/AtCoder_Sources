#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<int> dx = {2, 1, -1, -2};
    vector<int> dy = {1, 2, 2, 1};

    vector<pair<int, int>> s1(8), s2(8);
    rep(i, 4){
        // (x1, y1)周辺の条件を満たす格子点を格納
        s1[i] = (make_pair(x1 + dx[i], y1 + dy[i]));
        s1[i+4] = (make_pair(x1 + dx[i], y1 - dy[i]));

        // (x2, y2)周辺の条件を満たす格子点を格納
        s2[i] = (make_pair(x2 + dx[i], y2 + dy[i]));
        s2[i+4] = (make_pair(x2 + dx[i], y2 - dy[i]));
    }
    
    string s = "No";
    rep(i, 8){
        rep(j, 8){
            if(s1[i].first == s2[j].first && s1[i].second == s2[j].second) s = "Yes";
        }
    }
    cout << s << endl;
    return 0;

}