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
    int N;
    cin >> N;
    vector<int> L(N);
    rep(i, N) cin >> L[i];
    //昇順ソート
    sort(L.begin(), L.end());
    //条件を満たす三角形の個数
    int ans = 0;
    //a < b < cとなるような探索を行う。
    rep(a, N){
        for(int b = a + 1; b < N; b++){
            //a, bを固定した時の、その時の三角形の個数をcountをする
            int count = 0;
            //境界条件をabとして設定
            int ab = L[a] + L[b];
            //境界条件以上となるindexをlower_boundによって求め、L.begin()を引くことで、始点から、そのindexまでの要素数をrに格納
            int r = lower_bound(L.begin(), L.end(), ab) - L.begin();
            //今回の条件では、b-a < c < a + b なので、c < a+b を満たす最大のindexをrに格納するため、ディクリメントした。
            r--;
            //indexで、b+1から、rまでの個数を、countに代入
            count = r - b;
            ans += count;
        }
    }
    cout << ans << endl;
    return 0;
    
}