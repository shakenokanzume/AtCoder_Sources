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
    int K;
    cin >> K;
    int limit = K;
    int val = 0;
    //K+1項目以降は必ずa_(i)%Kの値の重複が発生し、循環が開始するので、K項目までをチェックする。
    rep(i, limit){
        //f(a_(i+1) = f(a_i) = 10*a_(i) + 7 の計算部分と、それをKで割った余りをvalに格納
        val = (10*val + 7) % K;
        //valが0になった(問題の条件が満たされた）時の出力処理
        if(val == 0){
            cout << i+1 << endl;
            return 0;
        }
    }
    //問題条件が成立しなかった時の出力処理
    cout << -1 << endl;
    return 0;
}