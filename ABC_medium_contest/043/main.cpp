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
    ll x;
    cin >> x;
    ll num = 0; //カンガルーのいる位置
    ll mn = 0;
    for(ll i = 0;; i++){
        num += i;
        if(x <= num){
            mn = i;
            break;
        }
    }
    cout << mn << endl;
    return 0;
}