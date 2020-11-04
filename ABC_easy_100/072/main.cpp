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
    int X;
    cin >> X;
    int mx = 1; //X以下の最大のべき乗数
    int limit = (int)sqrt(X);
    for(int i = 2; i <= limit; i++){
        int num = i * i;
        for(int j = 2;; j++){
            if(num <= X){
                mx = max(mx, num);
                num *= i;
            }else{
                break;
            }
        }
    }
    cout << mx << endl;
    return 0;
}