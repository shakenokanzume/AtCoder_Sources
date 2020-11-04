#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int func(int a, int b, int c){ //交換の操作を1回行うことができれば1を、行えなければ0を返す関数
    if(a % 2 == 1 || b % 2 == 1 || c % 2 == 1) return 0;
    if(a == b && b == c) return -1;
    return func((b + c) / 2, (a + c) / 2, (a + b) / 2) + 1;
}

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    long long  ans = func(A, B, C);
    cout << ans << endl;
    return 0;
}