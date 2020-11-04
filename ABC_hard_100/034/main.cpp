#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    //最後に選び方を求めるときに使う配列
    vector<int> p;

    //題意を満たすような並び方が存在するかのチェックを行う。
    vector<int> num(N);
    //Nが偶数の場合
    if(N % 2 == 0){
        //差の値の種類と、それぞれの数を数える
        rep(i, N) num[a[i]]++;
        //正しさチェック
        bool is = true;
        rep(i, N){
            //差の個数が偶数個の者は存在しない
            if(i % 2 == 0 && num[i] != 0) is = false; 
            //差の個数が奇数個の者は必ず2つ存在
            if(i % 2 == 1 && num[i] != 2) is = false;
        }
        if(!is){
            cout << 0 << endl;
            return 0;
        }
    }else{ //Nが奇数の場合
        rep(i, N) num[a[i]]++;
        bool is = true;
        rep(i, N){
            if(i == 0 && num[i] != 1) is = false;
            if(i != 0 && i % 2 == 0 && num[i] != 2) is = false;
            if(i % 2 == 1 && num[i] != 0) is = false;
        }
        if(!is){
            cout << 0 << endl;
            return 0;
        }
    }
    rep(i, N) if(num[i] != 0) p.push_back(num[i]);
    ll ans = 1;
    for(int v : p) ans = (ans * v) % lim;
    cout << ans << endl;
    return 0;
}