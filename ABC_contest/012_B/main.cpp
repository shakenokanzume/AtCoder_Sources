#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;

    int h, m, s;
    h = N / 3600;
    N -= 3600 * h;
    m = N / 60;
    N -= 60 * m;
    s = N;

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}