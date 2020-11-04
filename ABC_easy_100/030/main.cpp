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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    x3 = x2 - y2 + y1;
    y3 = y2 + x2 - x1;
    x4 = x1 - y2 + y1;
    y4 = y1 + x2 - x1;

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}