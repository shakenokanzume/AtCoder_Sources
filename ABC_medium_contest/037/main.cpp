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
    int N;
    cin >> N;
    int h[N];
    rep(i, N) cin >> h[i];
    int cnt = 0; //水やり操作を行う回数
    while(1){ //19行目から、24行目までは、すべてのh[i]が0となっているか（終了条件かどうか）を調べている
        bool is = true;
        rep(i, N){
            if(h[i] != 0) is = false;
        }
        if(is) break; //終了条件は、「すべての花の高さが0になること」としてある。（1ずつ減らしていく）

        int i = 0;
        while(i < N){
            if(h[i] = 0) i++; //もう高さが残っていない花は無視する
            else{
                cnt++; //区間の始まり
                while(i < N && h[i] > 0){
                    h[i]--;
                    i++; //区間の終わりまで飛ばす
                }
            }
        }
    }
    cout << cnt << endl;
}