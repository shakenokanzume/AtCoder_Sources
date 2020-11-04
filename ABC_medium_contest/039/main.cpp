#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    ll K, A, B;
    cin >> K >> A >> B;
    ll ans = 1;
    if(A > B - 2){ //B-A >= 2の時には、第2、第3のペアのサイクルを行うメリットがあるが、それ以外の場合、第1の操作をし続けたほうが効率的である。
        ans += K;
    }else{
        if(A + 1 <= K){
            ll leave = K - (A - 1); //ビスケットの数がA枚にたどりついたときに残っている実行可能回数
            ll cycle = leave / 2; //第２、第3の操作のペアを行う回数
            ll pan = leave % 2; //第1の操作を行う回数
            ans = A + (B - A) * cycle + pan; 
        }else{
            ans += K;
        }
    }
    cout << ans << endl;
    return 0;
}