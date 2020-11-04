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
    ll a, b, c;
    cin >> a >> b >> c;
    if(c - a - b > 0 && 4*a*b < (c-a-b)*(c-a-b)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}