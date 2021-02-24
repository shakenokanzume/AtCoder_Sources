#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 各桁の数字を大きい順に並べ変えてできる整数を出力
ll g1(string x){
    // x=0であった時の処理
    if (x == "0") return 0;

    sort(x.begin(), x.end(), greater<char>());
    ll ref = (ll)stoi(x);
    return ref;
}

// 各桁の数字を小さい順に並べ替えてできる整数を出力
ll g2(string x){
    if(x == "0") return 0;

    // 先頭が0になる可能性があるので、その時の処理を行う
    sort(x.begin(), x.end(), greater<char>());
    while(x.back() == '0'){
        x.pop_back();
    }

    // 大きい順に一回並び替えているので、反転させて小さい順にする
    reverse(x.begin(), x.end());
    ll ref = (ll)stoi(x);
    return ref;
}

string change(ll num){
    string s;
    // コーナーケースの処理
    if(num == 0) return "0";
    
    while(num != 0){
        char val = num % 10;
        s += ('0' + val);
        num /= 10;
    }
    return s;
}

int main(){
    string N;
    ll K;
    cin >> N >> K;

    vector<string> a(K+1);
    vector<ll> A(K+1);
    a[0] = N;
    A[0] = (ll)stoi(N);
    for(int i = 0; i < K; i++){
        ll f = g1(a[i]) - g2(a[i]);
        A[i+1] = f;
        a[i+1] = change(A[i+1]);
    }
    cout << A[K] << endl;
    return 0;
}