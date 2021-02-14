#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N, X;
    cin >> N >> X;

    // i番目のお酒に含まれるアルコール量を格納
    vector<double> alc(N);
    rep(i, N){
        double v, p;
        cin >> v >> p;
        // 100で割ることはせず、境界値のXの方に後で100をかける。
        alc[i] = v * p;
    }

    double sum = 0;
    rep(i, N){
        sum += alc[i];
        if(sum > X * 100){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}