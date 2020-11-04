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
    ll K;
    cin >> S >> K;
    for(int i = 0; i < K; i++){
        if(S.at(i) != '1'){
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}