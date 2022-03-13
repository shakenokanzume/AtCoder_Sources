#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int cnt = 0;

void func(vector<int>& a, vector<bool>& is, int start){
    if(is[start]) return;
    else{
        is[start] = true;
        cnt++;
        func(a, is, a[start]);
    }
}
int main(){
    int n, x;
    cin >> n >> x;
    x--;
    vector<int> a(n);
    rep(i, n){
        int val;
        cin >> val;
        val--;
        a[i] = val;
    }
    vector<bool> is(n, false);
    func(a, is, x);
    cout << cnt << endl;
    return 0;
}