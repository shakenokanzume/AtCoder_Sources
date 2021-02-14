#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 10で割った余りが7になるかどうか判定する関数
bool is_10(int N){
    bool ans = false;
    while(N != 0){
        if(N % 10 == 7){
            ans = true;
            break;
        }
        N /= 10;
    }
    return ans;
}

// 8で割った余りが7になるかどうか判定する関数
bool is_8(int N){
    bool ans = false;
    while(N != 0){
        if(N % 8 == 7){
            ans = true;
            break;
        }
        N /= 8;
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 1; i <= N; i++){
        if(!is_10(i) && !is_8(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}