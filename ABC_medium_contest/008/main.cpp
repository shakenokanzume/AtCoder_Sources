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
    int a[N];
    rep(i, N) cin >> a[i];
    bool is_ex[8]; //レートが3200未満での各色について、その色になる人が存在するかを格納する配列
    rep(i, 8) is_ex[i] = false;
    int over_count = 0; //レートが3200以上になる人の人数を数える変数
    rep(i, N){
        rep(j, 8){
            if(a[i] >= 400 * j && a[i] < 400 * (j + 1)) is_ex[j] = true;
        }
        if(a[i] >= 3200) over_count++;
    }
    int unover_count = 0; //レートが3200未満での色の種類を数える配列
    rep(i, 8) if(is_ex[i] == true) unover_count++;
    //レートが3200未満の人が存在しない場合での場合分けが必要です。
    if(unover_count == 0) cout << 1 << " " << unover_count + over_count << endl;
    else cout << unover_count << " " << unover_count + over_count << endl;
    return 0;
}