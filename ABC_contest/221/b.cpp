#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s, t;
    cin >> s >> t;
    int N = (int)s.size();
    if(N != (int)t.size()){
        cout << "No" << endl;
        return 0;
    }
    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }
    rep(i, N){
        for(int j = i+1; j < N; j++){
            string r = t;
            swap(r[i], r[j]);
            if(s == r){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}