#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    ll x;
    cin >> N >> x;
    ll a[N];
    ll a_sum = 0;
    rep(i, N){
        cin >> a[i];
        a_sum += a[i];
    }
    if(a_sum == x){
        cout << N << endl;
        return 0;
    }

    sort(a, a + N);
    ll rest = x;
    int count = 0; //満足してくれた人数
    rep(i, N-1){
        rest -= a[i];
        if(rest >= 0){
            count++;
        }else{
            break;
        }
    }
    cout << count << endl;
    return 0;
}