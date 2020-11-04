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
    ll N;
    cin >> N;
    vector<ll> sum;
    ll lim = (ll)sqrt(N);
    for(int i = 1; i <= lim; i++){
        ll a = i;
        ll b = 0;
        if(N % a == 0){
            b = N / a;
            sum.push_back((a-1) + (b-1));
        }
    }
    sort(sum.begin(), sum.end());
    cout << sum[0] << endl;
    return 0;
}