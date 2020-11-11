#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, K;
    cin >> N >> K;

    //Kが正でも負でも答えの個数は変わらない
    if(K < 0) K *= -1;

    //1 <= A,B <= 2Nの条件下で　(a+b) - (c+d) = K　を、A - B = K と読み替え
    //1 <= a,b <= Nの条件下でa+b = vとなるような組(a, b)の個数を配列P[v]に格納
    vector<ll> p(2*N+1, 0);
    for(int i = 2; i <= 2*N; i++){
        //2 <= i <= N+1の時には、p[i] = i-1
        //N+2 <= i <= 2*Nの時には、p[i] = 2*N - i + 1
        p[i] = min(i-1, 2*N - i + 1);
    }
    //答えとなる、条件を満たす(a, b, c, d)の組の個数を格納
    ll cnt = 0;
    //a+b == i となる時には、c + d == i - K となっているはずである((a+b) - (c+d) == Kより)
    for(int i = K; i <= 2*N; i++){
        cnt += p[i] * p[i-K];
    }
    cout << cnt << endl;
    return 0;
}