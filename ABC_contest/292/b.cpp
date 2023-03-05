#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int N, Q; cin >> N >> Q;
    vector<int> is(N, 0);
    rep(i, Q){
        int a, x; cin >> a >> x;
        // イエローカードの場合
        if(a == 1){
            is[x-1]++;
        // レッドカードの場合
        }else if(a == 2){
            is[x-1] += 2;
        // 退場チェック
        }else if(a == 3){
            // 退場の場合の処理
            if(is[x-1] >= 2){
                cout << "Yes" << endl;
            // 累積一枚以下の場合
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}