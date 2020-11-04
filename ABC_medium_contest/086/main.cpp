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

int main(){
    ll N;
    cin >> N;
    map<ll, ll> mp; //数字の出現回数を記録する連想記憶配列
    vector<ll> val; //数字の種類を格納する配列
    rep(i, N){
        ll a;
        cin >> a;
        if(mp.count(a) == 0){
            val.push_back(a);
        }
        mp[a]++;
    }
    sort(val.begin(), val.end()); //val[0]で0が参照できるようにソート
    bool is = false;
    //1種類の数字のみが入力された場合、条件を満たすのは、すべてが0の時
    if((int)val.size() == 1){
        if(mp[0] == N) is = true;
    }
    //要素数Nが3で割り切れる場合
    if(N % 3 == 0){
        ll v = (int)val.size();
        if(v == 3){ //入力された数字が3種類の時
            if((mp[val[0]] == N/3) && (mp[val[0]] == mp[val[1]]) && (mp[val[1]] == mp[val[2]])) is = true;
        }else if(v == 2){ //入力された数字が2種類の時
            if((val[0] == 0) && (mp[val[0]] == N/3) && (mp[val[1]] = 2*N/3)) is = true;
        }else if(v == 1 && mp[0] == N) is = true;
        else is = false;
    }
    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}