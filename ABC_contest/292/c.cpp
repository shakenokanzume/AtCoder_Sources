#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

// ある正整数Mが、何通りの正整数の積の組で表せるかを算出する関数
ll func(int M){
    // 入力されるMが何通りの２つの正の整数の組で表せるかを計上する変数
    ll cnt = 0;
    // 割る数をiとして、割っていく
    for(int i = 1; i * i <= M; i++){
        // 割り切れるときは、iがMの平方根でなければ、（A, B）, (C, D)の組み合わせの順番を考慮して、２つの組み合わせを計上
        if(M % i == 0 && i * i != M) cnt += 2;
        // iがMの平方根であれば、組み合わせ順は重複となる
        if(M % i == 0 && i * i == M) cnt++;
    }
    return cnt;
}

int main(){
    int N; cin >> N;
    ll ans = 0;
    // X = AB, Y = CDとしたときに、X+Y=Nとなる（X, Y)の組み合わせは、N-1個ある
    // N-1個をすべて見ていく
    for(int X = 1; X <= N-1; X++){
        int Y = N - X;
        // X, Yそれぞれが、A*BとC*Dで何通りの表し方があるかを調べ、その数の積を答えとする
        ans += func(X) * func(Y);
    }
    cout << ans << endl;
    return 0;
    return 0;
}