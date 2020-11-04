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
#define ans(a, b, c) if(x >= a && x < b){cout << c << endl;}

int main(){
    int x;
    cin >> x;
    ans(400, 600, 8);
    ans(600, 800, 7);
    ans(800, 1000, 6);
    ans(1000, 1200, 5);
    ans(1200, 1400, 4);
    ans(1400, 1600, 3);
    ans(1600, 1800, 2);
    ans(1800, 2000, 1);
    return 0;
}