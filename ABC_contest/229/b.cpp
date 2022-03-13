#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    string A, B;
    cin >> A >> B;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int mx = max((int)A.size(), (int)B.size());
    rep(i, mx){
        if((int)A.size() <= i) A.push_back('0');
        if((int)B.size() <= i) B.push_back('0');
    }
    rep(i, mx)
    {
        int a = int(A[i] - '0');
        int b = int(B[i] - '0');
        if (a + b >= 10)
        {
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;
    return 0;
}