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
    vector<int> p(M);
    vector<string> S(M);
    rep(i, M) cin >> p.at(i) >> S.at(i);
    int is_ac[N] = {0}; //その問題で、ACがとれているかどうか（取れていれば1, 取れていなければ0）
    int count_wa[N] = {0}; //その問題で、初めてACが出るまでにWAが出た回数
    rep(i, M){
        if(S[i] == "WA" && is_ac[p[i]-1] == 0){
            count_wa[p[i]-1]++;
        }
        if(S[i] == "AC") is_ac[p[i]-1] = 1;
    }
    int sum_ac = 0;
    int sum_wa = 0;
    for(int i = 0; i < N; i++){
        sum_ac += is_ac[i];
        if(is_ac[i] == 1){
            sum_wa += count_wa[i];
        }
    }
    cout << sum_ac << " " << sum_wa << endl;
    return 0;
}