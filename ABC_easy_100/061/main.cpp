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
    string S, T;
    cin >> S >> T;
    string S_fix = S;
    bool is_can = false;
    int length = (int)S.size();
    for(int i = 0; i < length ; i++){
        for(int j = 0; j < length; j++){
            S_fix[j] = S[(i + j) % length];
        }
        if(S_fix == T){
            is_can = true;
            break;
        }
    } 
    if(is_can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}