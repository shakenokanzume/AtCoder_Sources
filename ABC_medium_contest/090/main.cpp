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
    int N, q;
    string S;
    cin >> N >> q >> S;
    //indexがiのところまでで、"AC"が何回出てきたかを保存する配列
    vector<int> count(N, 0);
    //ループ内で、現時点まででの"AC"の出現回数を更新する変数
    int now_cnt = 0;
    for(int i = 1; i < N; i++){
        if(S[i-1] == 'A' && S[i] == 'C'){
            now_cnt++;
        }
        count[i] = now_cnt;
    }
    vector<int> ans(q);
    rep(i, q){
        int l, r;
        cin >> l >> r;
        int val = count[r-1] - count[l-1];
        ans[i] = val;
    }
    rep(i, q) cout << ans[i] << endl;
    return 0;
}