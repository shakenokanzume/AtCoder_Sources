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
    ll h[N];
    rep(i, N) cin >> h[i];
    bool is_can = true;
    for(int i = N-1; i > 0; i--){ //右側からチェックしていく
        if(h[i] - h[i-1] < 0){ //何もしなくていいなら、何もしない
            if(h[i] - h[i-1] == -1){ //一つ左側のほうが、1だけ大きいなら、一つ左側を1低くする
                h[i-1]--;
            }else{ //一つ左側の方が、2以上大きいなら、どうにもならないので、is_can = falseとする。
                is_can = false;
                break;
            }
        }
    }
    if(is_can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}