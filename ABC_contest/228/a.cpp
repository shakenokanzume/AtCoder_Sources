#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int s, t, x;
    cin >> s >> t >> x;
    if(s < t){
        if (x >= s && x < t)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }else{
        if((x >= s && x <= 23) || (x >= 0 && x < t)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}