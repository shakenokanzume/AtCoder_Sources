#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<ll> a(N);

    //生き物の色は、必ずN色で、生き物の数と同じになっているので、この問題の答え方で、
    //色を気にする必要はなく、最終的に生き残る可能性のある生き物の種類数を答えれば良い。
    //そのため、生き物の色は配列aに反映させなかった。
    rep(i, N) cin >> a[i];

    //昇順にソート
    sort(a.begin(), a.end());

    //累積和
    //配列aはソート済みなので、生き物jは、i<jとなる生き物すべてを吸収することができ、
    //大きさはa[0] + a[1] + ... + a[j]となることができる。
    vector<ll> sum(N+1, 0);
    for(int i = 1; i < N+1; i++){
        sum[i] = sum[i-1] + a[i-1];
    }

    //自分より小さい生き物をすべて吸収したとしても、自分より大きな生き物を吸収できない
    //のであれば、その生き物よりも小さな生き物が最後に残ることはない。
    int val = N-1;
    for(int i = N-1; i >= 1; i--){
        //最後に生き残る可能性のある、最も小さな生き物の格納indexをvalに格納する
        //ただし、累積和のほうで格納場所をとるので、1-indexであることに注意
        if(sum[i]*2 >= a[i]) val = i;
        else break;
    }

    //小さい順で、valからNまで(1-index)の生き物は最後に残る可能性がある。
    int ans = N-val+1;
    cout << ans << endl;
    return 0;
}