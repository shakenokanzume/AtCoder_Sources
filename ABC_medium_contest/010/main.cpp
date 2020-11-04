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
    vector<int> a[N];
    rep(i, N){
        int num;
        cin >> num;
        for(int j = -1; j <= 1; j++){
            a[i].push_back(num + j);
        }
    }
    map<int, int> mp;
    rep(i, N){
        rep(j, 3){
            if(mp.count(a[i][j]) == 0) mp.insert(make_pair(a[i][j], 1));
            else mp[a[i][j]]++;
        }
    }
    int mx = 0;
    for(auto p : mp){
        mx = max(mx, p.second);
    }
    cout << mx << endl;
    return 0;
}