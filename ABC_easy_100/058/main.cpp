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

//この問題は、気温（ave_tempとAの値）を1000倍して演算すれば、浮動小数点型を用いなくて良くなる。
int main(){
    int N, T, A;
    cin >> N >> T >> A;
    int H[N];
    double sub[N];
    rep(i, N){
        cin >> H[i];
        double ave_temp = T - H[i] * 0.006;
        sub[i] = fabs(ave_temp - A);
    }
    double min = sub[0];
    int min_index = 0;
    rep(i, N){
        if(min > sub[i]){
            min = sub[i];
            min_index = i;
        }
    }
    cout << min_index + 1 << endl;
    return 0;
}