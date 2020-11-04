#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;
    //Kで割ってi余る数が、1以上N以下に何個あるかを、num[i]に格納する
    vector<ll> num(K, 0);
    for(int i = 1; i <= N; i++) num[i%K]++;
    ll val = 0;
    //a%Kの値をaとして扱い、その時のb%K, c%Kを求める。
    //b%K, c%Kの値は、(a+b)%K == (a+c)%K == 0が成立している前提で決定している
    //(b+c)%K == 0となれば、その組み合わせの個数を答えに追加する
    for(int a = 0; a < K; a++){
        //ここでのb, cは、b%K, c%Kである。
        int b = (K-a) % K;
        int c = (K-a) % K;
        //
        if((b+c) % K != 0) continue;
        //num[i]には、Kで割った余りがiになる1以上N以下の整数の個数が格納されているため、それを掛け合わせた
        //分だけ、組み合わせが存在する。
        val += num[a] * num[b] * num[c];
    }
    cout << val << endl;
    return 0;
}