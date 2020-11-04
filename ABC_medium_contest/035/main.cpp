#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll GCD(ll i, ll j){ //（第1引数の値）>=（第2引数の値）となるようにする
    if(j == 0) return i; //再帰の終了条件
    return GCD(j, i % j); 
}

int main(){
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll g = GCD(max(C, D), min(C, D));
    ll l = (C * D) / g;
    //A-1以下において、該当するものの個数を求める
    ll ac = (A-1) / C;
    ll ad = (A-1) / D;
    ll acd = (A-1) / l;
    ll cnt_a = (A-1) - (ac + ad - acd);
    //B以下において、該当するものの個数を求める
    ll bc = B / C;
    ll bd = B / D;
    ll bcd = B / l;
    ll cnt_b = B - (bc + bd - bcd);
    ll ans = cnt_b - cnt_a;
    cout << ans << endl;
    return 0;
}