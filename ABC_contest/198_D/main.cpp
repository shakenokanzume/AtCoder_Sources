#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    set<int> st1 = {1, 2, 3, 4};
    set<int> st2 = st1;

    if(st2.count(2) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}