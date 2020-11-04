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

//小数点以下が出てくる場合の大小比較は、両辺に小数点を消すような値をかけてから行う。

int main(){
    int N;
    cin >> N;
    int a[N];
    int  sum = 0;
    rep(i, N){
        cin >> a[i];
        sum += a[i];
    }
    int res = sum * sum; //各値から平均を引いた値で最小となるもの
    rep(i, N){
        int sub = fabs(N * a[i] - sum);
        res = min(res, sub);
    }
    rep(i, N){
        if(res == abs(N * a[i] - sum)){
            cout << i << endl;
            break;
        }
    }
    return 0;
}