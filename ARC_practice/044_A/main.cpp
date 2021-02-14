#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    ll N;
    cin >> N;

    // N=1の時は例外として処理
    if(N == 1){
        cout << "Not Prime" << endl;
        return 0;
    }

    // Nが素数であるかどうかを判定
    // 素数である場合、trueとなる
    bool is = true; 
    for(ll i = 2; i*i <= N; i++){
        if(N % i == 0){
            is = false;
            break;
        }
    }
    if(is){
        cout << "Prime" << endl;
        return 0;
    }

    // 合成数である場合の、「素数っぽい」条件
    if(N % 2 != 0 && N % 3 != 0 && N % 5 != 0){
        cout << "Prime" << endl;
        return 0;
    }else{
        cout << "Not Prime" << endl;
        return 0;
    }
}