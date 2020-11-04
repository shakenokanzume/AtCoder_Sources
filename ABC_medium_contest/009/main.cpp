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
    int A, B, C;
    cin >> A >> B >> C;
    bool is_ex = false;
    for(int i = 1; i <= B; i++){
        int num = A * i;
        if(num % B == C) is_ex = true;
    }
    if(is_ex) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}