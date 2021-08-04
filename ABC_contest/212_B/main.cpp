#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int N = (int)s.size();

    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3]){
        cout << "Weak" << endl;
        return 0;
    }

    int weak_cnt = 0;
    rep(i, N-1){
        if(s[i] != 9 && (int)s[i+1] - (int)s[i] == 1){
            weak_cnt++;
        }else if(s[i] == ('0' + 9) && s[i+1] == '0'){
            weak_cnt++;
        }
    }
    
    if(weak_cnt == 3){
        cout << "Weak" << endl;
        return 0;
    }
    cout << "Strong" << endl;
    return 0;
}