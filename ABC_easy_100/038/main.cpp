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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int N = 5;
    vector<int> time = {a, b, c, d, e};
    vector<int> nexttime(N);
    rep(i, N){
        if(time[i] % 10 == 0) nexttime[i] = time[i];
        else nexttime[i] = time[i] - time[i] % 10 + 10;
    }

    int besttime = 99999999;
    rep(i, N){
        int sumtime = 0;
        rep(j, N){
            if(i == j){ //一番最後の加算（最後の料理を注文してから届くまでの時間を加算する）時の操作
                sumtime += time[j];
            }else{ //一番最後以外の、time以上の10の倍数をsumtimeに加算する操作
                sumtime += nexttime[j];
            }
        }
        besttime = min(besttime, sumtime);
    }
    cout << besttime << endl;

    return 0;
}