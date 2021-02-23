#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, M;
    cin >> N >> M;
    
    // 青色で塗られているマスの番号を格納する配列A(M)を作成
    // ただし、マスの列の両端は青色で塗られているとして、A[0] = 0, A[M+1] = N+1とする。
    vector<int> A(M+2);
    A[0] = 0, A[M+1] = N+1;
    for(int i = 1; i <= M; i++) cin >> A[i];
    // マスを小さい順に並び替える
    sort(A.begin(), A.end());

    // A[i]マスとA[i+1]マスの間にある白マスの数の種類と、その個数を格納する
    map<int, int> mp;
    rep(i, M+1){
        // A[i]マスとA[i+1]マスの間にある白マスの個数
        int count = A[i+1] - A[i] - 1;
        // 数ごとに個数を計上(青マスが隣り合っている場合は計上しない)
        if(count != 0){
            mp[count]++;
        }
    }

    int k = mp.begin()->first;

    ll ans = 0;
    for(auto p : mp){
        ans += ((p.first + k - 1) / k) * p.second;
    }

    cout << ans << endl;
    return 0;


}