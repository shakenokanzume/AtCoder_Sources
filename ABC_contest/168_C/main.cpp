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

#define pi 3.1415926535989793

int main(){
    double A, B, H, M;
    cin >> A >> B >> H >> M;
    double a_rad = 0;
    double b_rad = 0;
    double min = H * 60 + M;
    a_rad = (H / 12) * 2 * pi + (M / 60) * (2 * pi / 12);
    b_rad = 2 * pi * M / 60;

    double drad = a_rad - b_rad;
    double num = pow(A, 2) + pow(B, 2) - 2 * A * B * cos(drad);
    double ans = sqrt(num);
    printf("%.11f\n", ans);
    return 0;
}