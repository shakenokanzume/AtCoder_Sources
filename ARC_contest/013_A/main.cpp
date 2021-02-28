#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int func(vector<int> a1, vector<int> a2){
    // 入る個数を求める
    int cnt = 1;
    rep(i, 3){
        cnt *= (a1[i] / a2[i]);
    }
    return cnt;
}

int main(){
    vector<int> array1(3), array2(3);
    rep(i, 3) cin >> array1[i];
    rep(i, 3) cin >> array2[i];

    int ans = 0;
    sort(array2.begin(), array2.end());
    do{
        ans = max(ans, func(array1, array2));
    }while(next_permutation(array2.begin(), array2.end()));
    cout << ans << endl;
    return 0;
}