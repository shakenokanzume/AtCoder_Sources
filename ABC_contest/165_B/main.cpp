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
    ll X;
    cin >> X;
    ll year = 0;
    ll mon = 100;
    for(int i = 0;; i++){
        mon += mon / 100;
        year++;
        if(mon >= X){
            cout << year <<endl;
            break;
        }
    }
    return 0;
}