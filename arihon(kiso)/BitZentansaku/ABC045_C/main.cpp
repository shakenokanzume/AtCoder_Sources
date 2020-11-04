#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();

    //答え格納変数
    ll sum = 0;
    //一次的な和の格納変数
    for(int bit = 0; bit < (1 << N-1); bit++){
        ll temp = 0;
        for(int i = 0; i < N-1; i++){
            temp *= 10;
            temp += (S[i] - '0');
            if(bit & (1 << i)){
                sum += temp;
                temp = 0;
            }
        }
        temp *= 10;
        temp += (S.back() - '0');
        sum += temp;
    }
    cout << sum << endl;
    return 0;
}