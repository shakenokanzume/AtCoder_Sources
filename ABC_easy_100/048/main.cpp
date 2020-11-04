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
    int H[N];
    rep(i, N) cin >> H[i];
    int count = 0;
    int max_cnt = 0;
    int cnt = 0;
    rep(i, N-1){
        if(H[i] >= H[i + 1]){
            cnt++;
            max_cnt = max(max_cnt, cnt);
        }else{
            cnt = 0;
        }
    }
    cout << max_cnt << endl;
    return 0;
}