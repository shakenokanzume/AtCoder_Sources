#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

string to_str(int N){
    string s;
    while(N != 0){
        s.push_back(N % 10 + '0');
        N /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    ll N;
    cin >> N;
    // ある数字ｘの半分の桁について、条件を満たすかどうか判定する
    for(int i = 1; ; i++){
        if(stoll(to_str(i) + to_str(i)) > N){
            cout << i-1 << endl;
            return 0;
        }
    }
}