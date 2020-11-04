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
    string S;
    cin >> S;
    ll sum = 0;
    int len = (int)S.size();
    for(int i = 0; i < len; i++){
        int up = len - i - 1;; //i解よりも上にある階の数
        int down = i; //i階よりも下にある階の数
        if(S.at(i) == 'U'){
            sum += 2 * down + up;
        }else{
            sum += down + 2 * up;
        }
    }
    cout << sum << endl;
    return 0;
}