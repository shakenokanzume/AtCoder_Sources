#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 素数判定用の関数
// 今回の問題では、2 <= num <= 200 の制限がかかる
bool is_sosuu(int num){
    if(num == 2) return true;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    // A <= i <= B のすべてのiに対して、C <= j <= D のjの取り方によって、i+jを素数にできる場合trueを入れる
    vector<bool> is(b-a+1, false);
    for(int i = a; i <= b; i++){
        for(int j = c; j <= d; j++){
            // is[i] = ?
            if(is_sosuu(i+j)) is[i-a] = true;
        }
    }
    rep(i, b-a+1){
        if(!is[i]){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}