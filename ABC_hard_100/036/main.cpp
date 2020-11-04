#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll S;
    cin >> S;

    const int val = pow(10, 9);

    //Y_3を、Sを10^9で割った繰り上げとしている
    int y = (S + val - 1) / val;
    //X_3を、Sを10^9で割った余りとしている
    int x = val * y - S;
    //こうすることで、三角形の面積の公式を満足する組み合わせを1つ求めることができる。

    cout << 0 << " " << 0 << " " << val << " " << 1 << " " << x << " " << y << endl;
    return 0;
}