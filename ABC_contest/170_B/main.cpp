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
    int X, Y;
    cin >> X >> Y;
    bool is = true;
    if((Y-2*X) % 2 == 0 && (Y-2*X) / 2 >= 0) is = true;
    else is = false;

    bool iss = true;
    if((4*X - Y) % 2 == 0 && (4*X - Y) / 2 >= 0) iss = true;
    else iss = false;

    if(is && iss) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}