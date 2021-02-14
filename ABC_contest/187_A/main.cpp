#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string A, B;
    cin >> A >> B;
    int a_sum = 0;
    int b_sum = 0;

    rep(i, (int)A.size()){
        a_sum += (A[i] - '0');
    }
    rep(i, (int)B.size()){
        b_sum += (B[i] - '0');
    }
    cout << max(a_sum, b_sum) << endl;
    return 0;
}