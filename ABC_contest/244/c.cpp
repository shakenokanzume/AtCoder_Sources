#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    // 1~2*n+1までの数字がすでに出されているかどうかを格納
    vector<bool> numbers(2*n+2, false);

    rep(i, n+1){
        for(int j = 1; j <= 2*n+1; j++){
            if(!numbers[j]){
                numbers[j] = true;
                cout << j << endl;
                break;
            }
        }
        int val; cin >> val;
        if(val == 0 || numbers[val]) return 0;
        numbers[val] = true;
    }
    return 0;
}