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
    vector<int> b(N); //与えられる数列
    vector<int> t(N); //数列bを作れるかどうかをチェックするための配列
    rep(i, N) cin >> b[i];
    rep(i, N) t[i] = (i+1);
    //数列bが作れるかチェック部分
    bool is = true;
    rep(i, N){
        if(b[i] > t[i]){
            is = false;
            break;
        }
    }
    if(!is){
        cout << -1 << endl;
        return 0;
    }
    //数列bが作れる時の、作り方
    vector<int> ans(N); //数字の挿入順を記憶する配列
    rep(i, N){
        int len = N - i;
        vector<int> a(len);
        rep(j, len) a[j] = (j+1);
        for(int j = len-1; j >= 0; j--){
            if(a[j] == b[j]){
                ans.push_back(a[j]);
                b.erase(b.begin() + j);
                break;
            }
        }
    }
    //表示部分
    reverse(ans.begin(), ans.end());
    rep(i, N){
        cout << ans[i] << endl;
    }
    return 0;
}