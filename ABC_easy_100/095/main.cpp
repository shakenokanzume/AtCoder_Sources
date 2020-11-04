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
    int mx = max({A, B, C});
    int sub;
    if(mx == A) sub = (A - B) + (A - C);
    else if(mx == B) sub = (B - A) + (B - C);
    else sub = (C - A) + (C - B);
    int cnt = 0;
    if(sub % 2 == 0){
        cnt = sub / 2;
    }else{
        sub++;
        cnt = 1 + sub / 2;
    }
    cout << cnt << endl;
    return 0;
}