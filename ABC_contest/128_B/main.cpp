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
    //3つ以上の変数型を扱える型tupleを利用
    vector<tuple<string, int, int>> vc(N);
    rep(i, N){
        string S;
        int P;
        cin >> S >> P;
        //点数を満点からの差にする
        P = 100 - P;
        vc[i] = make_tuple(S, P, i+1);
    }
    //点数を満点空の差にすることによって、問題意図道理に並び替えるには、昇順ソートを行えばよいことになる。
    sort(vc.begin(), vc.end());
    for(auto p : vc){
        cout << get<2>(p) << endl;
    }
    return 0;
}