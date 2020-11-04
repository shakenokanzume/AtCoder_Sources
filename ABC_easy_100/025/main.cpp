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
    vector<int> P(N), Q(N);
    rep(i, N) cin >> P[i];
    rep(i, N) cin >> Q[i];

    vector<int> a(N);
    rep(i, N) a[i] = i + 1;
    map<vector<int>, int> mp;
    do{
        mp[a] = mp.size();
    }while(next_permutation(a.begin(), a.end()));

    cout << abs(mp[P] - mp[Q]) << endl;
    return 0;
}