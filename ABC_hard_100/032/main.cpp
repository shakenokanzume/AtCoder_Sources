#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

//素因数分解用の関数（素因数分解の場合は、探索範囲は2~sqrt(N)まで必要である）
vector<pair<int, int>> factorize(int N){
    vector<pair<int, int>> p;
    for(int i = 2; i*i <= N; i++){
        if(N % i == 0){
            int cnt = 0;
            while(N % i == 0){
                N /= i;
                cnt++;
            }
            p.emplace_back(i, cnt);
        }
    }
    if(N != 1) p.emplace_back(N, 1);
    return p;
}

int main(){
    int N;
    cin >> N;
    //素因数をfirst, 素因数の乗数をsecondに入れる
    map<int, int> mp;
    for(int i = 2; i <= N; i++){
        vector<pair<int, int>> f;
        f = factorize(i);
        //各項での素因数分解の結果を、mpに入れる
        for(auto fi : f){
            mp[fi.first] += fi.second;
        }
    }
    ll ans = 1;
    for(auto p : mp){
        ans = (ans * (p.second + 1)) % lim;
    }
    cout << ans << endl;
    return 0;
}