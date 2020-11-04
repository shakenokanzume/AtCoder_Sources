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
    string S;
    cin >> S;
    int len = (int)S.size();
    int cnt_1 = 0;
    int cnt_0 = 0;
    rep(i, len){
        if(S.at(i) == '1') cnt_1++;
        if(S.at(i) == '0') cnt_0++;
    }
    //ブロックを取り除く操作を行えなくなるのは、積んであるブロックが0か1のどちらかの種類しかない
    //状況になるときなので、取り除けるブロックの総数は、min(cnt_0, cnt_1) * 2 と表せる。
    cout << min(cnt_0, cnt_1) * 2 <<endl;
    return 0;
}