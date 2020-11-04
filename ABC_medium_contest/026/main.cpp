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
    ll a[N];
    rep(i, N) cin >> a[i];
    int cnt = 0;
    rep(i, N){
        while(i + 1 < N && a[i] == a[i+1]) i++; //次の値と同じなら、その部分は飛ばす。

        if(i + 1 < N && a[i] < a[i+1]){ //増加しているなら、単調非減少パートのスタート
            while(i + 1 < N && a[i] <= a[i+1]) i++; //単調非減少を満たす限り、whileで飛ばす
        }else if(i + 1 < N && a[i] > a[i+1]){ //減少しているなら、単調非増加パートのスタート
            while(i + 1 < N && a[i] >= a[i+1]) i++; //単調非増加を満たす限り、whileで飛ばす
        }
        cnt++; //for文が終わるってことは、ブロックの切り換えが起きたってことなので、cnt++する。
    }
    cout << cnt << endl;
    return 0;
}