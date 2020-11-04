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
    int K, A, B;
    cin >> K >> A >> B;
    for(int i = 1;; i++){
        int len = K * i;
        if(len >= A && len <= B){
            cout << "OK" << endl;
            break;
        }else if(len > B){
            cout << "NG" << endl;
            break;
        }
    }
    return 0;
}