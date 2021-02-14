#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string A;
    cin >> A;

    string ans = "";
    int len = (int)A.size();
    if(len >= 2){
        ans = A;
        ans.pop_back();
    }else{
        if(A[0] != 'a'){
            ans.push_back('a');
        }else{
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}