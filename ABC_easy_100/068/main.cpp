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
    vector<tuple<string, int, int>> a;
    rep(i, N){
        string s;
        int p;
        cin >> s >> p;
        p = -p;
        a.push_back(tie(s, p, i));
    }
    sort(a.begin(), a.end());
    rep(i, N) cout << get<2>(a[i]) + 1 << endl;
    return 0;
}