#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// a^bの関数
ll func1(ll a, ll b){
    if(b == 0) return 1;
    ll ref = 1;
    rep(i, b) ref *= a;
    return ref;
}

// 点数計上の関数
ll func2(vector<ll> array, int index){
    array[index]++;
    ll ref = 0;
    for(int i = 1; i < 10; i++){
        ref += i * func1(10, i);
    }
    return ref;
}

bool check(vector<ll> store, int i, int j){
    store[i]--;
    store[j]--;
    bool is = true;
    for(auto p : store){
        if(p < 0) is = false;
    }
    return is;
}

int main(){
    ll K;
    string S, T;
    cin >> K >> S >> T;

    // カードを配り終わったのちに残っている山札のカード枚数を格納するvector
    vector<ll> store(10, 0);
    // 配る前の状態にする
    for(int i = 1; i < 10; i++) store[i] = K;

    // 高橋君の持っているカードの枚数を格納する配列
    vector<ll> t(10, 0);
    // 青木君の持っているカードの枚数を格納する配列
    vector<ll> a(10, 0);
    // カード枚数を数える（4枚目まで）
    rep(i, 4){
        // 2人の持っているカード枚数を計上
        int takahashi = S[i] - '0';
        t[takahashi]++;
        int aoki = T[i] - '0';
        a[aoki]++;

        // 山札に残っているカード枚数を更新
        store[takahashi]--;
        store[aoki]--;
    }

    double ans = 0;
    // 高橋君の最後のカードを9, 8, 7, ..., 2, 1の順で決定していく（外ループ）
    // 青木君の最後のカードを1, 2, ..., 8. 9の順で決定していく（内ループ）
    for(int i = 9; i >= 1; i--){
        for(int j = 1; j <= 9; j++){
            ll p_t = 0, p_a = 0;
            // 山札にカードがなければ飛ばす
            if(!check(store, i, j)) continue;
            p_t = func2(t, i);
            p_a = func2(a, j);
            //  高橋君の方が点数が高くなった場合
            if(p_t >= p_a){
                
            }
        }
    }
}