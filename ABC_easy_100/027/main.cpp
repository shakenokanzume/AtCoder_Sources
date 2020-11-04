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
    ll N, A, B;
    cin >> N >> A >> B;
    ll count_ab = A + B;
    ll count_a = 0;
    count_a = A * (N / count_ab);  //count_ab != 0 && count_ab <= N
    count_a += min(A, N % count_ab);

    cout << count_a << endl;
    return 0;
}