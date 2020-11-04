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
    int P[N];
    rep(i, N) cin >> P[i];
    int min_array[N]; //そのインデックスまでで最小の値を格納する配列
    min_array[0] = P[0];
    for(int i = 1; i < N; i++){
        min_array[i] = min(min_array[i - 1], P[i]);
    }
    int count = 0;
    rep(i, N){
        if(min_array[i] == P[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}