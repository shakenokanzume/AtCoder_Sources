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
    int N ,M;
    cin >> N >> M;
    vector<pair<ll, ll>> pr;
    rep(i, N){
        ll a, b;
        cin >> a >> b;
        pr.push_back(make_pair(a,b));
    }
    sort(pr.begin(), pr.end());

    int cnt = 0; //これまでに買った数
    ll money = 0;
    for(auto itr : pr){
        int sub = M - cnt;
        int count = min(itr.second, (ll)sub);
        money += count * itr.first;
        cnt += count;
    }
    cout << money << endl;
    return 0;
}