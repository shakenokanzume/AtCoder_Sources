#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long long H, W;
    cin >> H >> W;
    long long sum = 0;

    for(long long i = 1; i <= H; i++){
        
        if(W == 1 || H == 1){
            sum = 1;
            break;
        }else if(W % 2 == 0){
            sum += W / 2;
        }else{
            if(i % 2 == 0){
                sum += W / 2;
            }else{
                sum += W / 2 + 1;
            }
        }
    }

    cout << sum << endl;

    return 0;
}