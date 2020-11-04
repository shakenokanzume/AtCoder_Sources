#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    int len = (int)s.size();
    bool is = false;
    int a_cnt = 0, b_cnt = 0, c_cnt = 0;
    rep(i, len){
        if(s[i] == 'a') a_cnt++;
        if(s[i] == 'b') b_cnt++;
        if(s[i] == 'c') c_cnt++;
    }
    int mx = max({a_cnt, b_cnt, c_cnt});
    if((mx - a_cnt >= 0 && mx - a_cnt <= 1)
    && (mx - b_cnt >= 0 && mx - b_cnt <= 1)
    && (mx - c_cnt >= 0 && mx - c_cnt <= 1)) is = true;

    if(is) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}