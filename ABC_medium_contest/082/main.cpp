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
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    sort(a.begin(), a.end());
    int min = a[0];
    int max = a[N-1];
    int mn_cost = 100000000;
    for(int i = min; i <= max; i++){
        int cost = 0;
        rep(j, N){
            cost += pow(a[j] - i, 2);
        }
        if(mn_cost > cost) mn_cost = cost;
    }
    cout << mn_cost << endl;
    return 0;
}