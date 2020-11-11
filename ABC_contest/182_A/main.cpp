#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int A, B;
    cin >> A >> B;
    cout << max(0, (2*A+100)-B) << endl;
    return 0;
}