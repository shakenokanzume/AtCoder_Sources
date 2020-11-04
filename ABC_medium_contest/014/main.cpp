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
    int H, W; 
    cin >> H >> W;
    char s[H + 2][W + 2];
    for(int i = 1; i < H + 1; i++){
        for(int j = 1; j < W + 1; j++) cin >> s[i][j];
    }
    int cnt = 0; //条件を満たさない(i, j)の個数を保存していく
    for(int i = 1; i < H + 1; i++){
        for(int j = 1; j < W + 1; j++){
            if(s[i][j] == '#' && s[i-1][j] != '#' && s[i+1][j] != '#' &&
            s[i][j - 1] != '#' && s[i][j + 1] != '#'){
                cnt++; //条件を満たさなかったら、cnt++を行う。
            }
        }
    }
    if(cnt == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}