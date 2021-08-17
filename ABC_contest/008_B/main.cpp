#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    map<string, int> mp;
    rep(i, N){
        string s;
        cin >> s;
        mp[s]++;
    }
    string mx;
    int mx_v = 0;
    for(auto p : mp){
        if(p.second > mx_v){
            mx = p.first;
            mx_v = p.second;
        }
    }
    cout << mx << endl;
    return 0;
}