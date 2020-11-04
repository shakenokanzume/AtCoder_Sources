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
    S = " " + S; //文字列Ｓのインデックスをgに合わせるため、最初に空文字を挿入
    ll N = (int)S.size();
    int g[N]; //i文字目までの、文字列Sの最大分割可能回数を保存
    g[0] = 0, g[1] = 1; //この後、漸化式(i>=3)を用いるので、g[0~2]を先に代入
    if(S.at(1) == S.at(2)) g[2] = 1;
    else g[2] = 2;
    for(int i = 3; i < N; i++){
        if(S.at(i) != S.at(i-1)){ //1文字前と一致しない場合は、
            g[i] = g[i-1] + 1;    //1文字前までの最大分割可能回数に1たしたものを代入
        }else{
            g[i] = g[i-3] + 2; //1文字前と一致してしまう場合は、
        }                      //3文字前までの最大分割可能回数に2をたしたものを代入
    }
    cout << g[N-1] << endl;
    return 0;
}