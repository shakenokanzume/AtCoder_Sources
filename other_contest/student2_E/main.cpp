#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int K;
    cin >> K;
    string S;
    cin >> S;
    int N = (int)S.size();

    // 判定
    if(N % K == 0 || N % K == 1){
        
    }else{
        cout << "impossible" << endl;
    }
    return 0;
}