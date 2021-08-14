#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, K, M;
    cin >> N >> K >> M;
    int sum = 0;
    rep(i, N-1){
        int a;
        cin >> a;
        sum += a;
    }
    for(int i = 0; i <= K; i++){
        int val = sum + i;
        if(val >= N*M){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}