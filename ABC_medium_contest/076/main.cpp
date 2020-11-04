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
    int N;
    cin >> N;
    string s;
    cin >> s;
    vector<int> e(N), w(N), val(N);
    int cnt = 0;
    //各地点までの東を向いている人の数
    rep(i, N){
        if(s[i] == 'E'){
            cnt++;
        }
        e[i] = cnt;
    }
    cnt = 0;
    //各地点までの西を向いている人の数（逆順でみて）
    for(int i = N-1; i >= 0; i--){
        if(s[i] == 'W'){
            cnt++;
        }
        w[i] = cnt;
    }
    rep(i, N) val[i] = N - (e[i] + w[i]); //各地点における向きを変えなければ行けない人の数
    sort(val.begin(), val.end());
    int ans = val[0];
    cout << ans << endl;
    return 0;
}