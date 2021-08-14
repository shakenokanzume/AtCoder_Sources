#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> pr;
    for(int i = 1; i <= N; i++){
        int a;
        cin >> a;
        pr.emplace_back(a, i);
    }
    sort(pr.begin(), pr.end());
    cout << pr[N-2].second << endl;
    return 0;
}