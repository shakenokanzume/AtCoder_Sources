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
    bool is_e = false; //条件1を満たすようなXが存在するかどうか
    int max_n = X / 100; //品物を買える個数の最大値
    for(int i = 1; i <= max_n; i++){
        if(100 * i <= X && X <= 100 * i + 5 * i){ //<条件1>　100円の品物を値段の基準として考える
            is_e = true;
            break;
        }
    }
    if(is_e) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}