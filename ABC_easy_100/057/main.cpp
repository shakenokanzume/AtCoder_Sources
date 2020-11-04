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
    int A, B;
    cin >> A >> B;
    bool is_end = false;
    for(int i = 1; i <= 1009; i++){ //税抜き価格が1009円の時に、10％税率でB=100.9となり、小数点切り捨てで100となる。
        int ans_A = i * 0.08;
        int ans_B = i * 0.1;
        if(ans_A == A && ans_B == B){
            cout << i << endl;
            is_end = true;
            break;
        }
    }
    if(!is_end){
        cout << -1 << endl;
    }
    return 0;
}