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

ll buy(ll* money, ll rate){
    ll kabu = (*money) / rate;
    (*money) -= rate * kabu;
    return kabu;
}
ll sold(ll *kabu, ll rate){
    ll money = (*kabu) * rate;
    (*kabu) = 0;
    return money;
}

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    ll kabu = 0;
    ll money = 1000;
    ll max_money = 1000;

    for(int i = 0; i < N-1;){
        if(a[i] < a[i+1]){
            kabu += buy(&money, a[i]);
            while(a[i] < a[i+1] && i < N-1) i++;
            money += sold(&kabu, a[i]);
            max_money = max(max_money, money);
        }
        if(a[i] == a[i+1]) i++;
        if(a[i] > a[i+1]){
            money += sold(&kabu, a[i]);
            max_money = max(max_money, money);
            while(a[i] > a[i+1] && i < N-1) i++;
            kabu += buy(&money, a[i]);
        }
    }
    cout << max_money << endl;
    return 0;
}