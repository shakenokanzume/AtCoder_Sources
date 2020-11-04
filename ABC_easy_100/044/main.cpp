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
    int N = (int)S.size();
    int bestcnt = N; //cntの最小値を取る
    for(int i = 0; i < 2; i++){ //iは最初のタイルの色
        int cnt = 0; //黒白黒白・・・の場合と、白黒白黒・・・の場合で、塗り替えないといけない回数を記録
        for(int j = 0; j < N; j++){
            if((j % 2 == 0) && ((int)S.at(j) != (i + '0'))) cnt++;
            if((j % 2 == 1) && ((int)S.at(j) == (i + '0'))) cnt++;
        }
        bestcnt = min(bestcnt, cnt);
    }
    cout << bestcnt << endl;
    return 0;
}