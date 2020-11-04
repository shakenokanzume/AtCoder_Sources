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
    int N, M;
    cin >> N >> M;
    vector<bool> is(N, false);
    vector<int> count(N, 1);
    is[0] = true;
    rep(i, M){
        int x, y;
        cin >> x >> y;
        //x-1番目の箱に赤玉が入っていた場合に行う
        if(is[x-1]){
            is[y-1] = true;
        }
        //x-1番目の箱に玉が1個だけ入っていて、それが赤玉である時に行う
        if(count[x-1] == 1 && is[x-1]){
            is[x-1] = false;
        }
        //玉を移動させる時には必ず行う
        count[x-1]--;
        count[y-1]++;
    }
    int cnt = 0;
    rep(i, N) if(is[i]) cnt++;
    cout << cnt << endl;
    return 0;
}