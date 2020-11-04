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
    string S;
    cin >> S;
    int Rcnt = 0;
    rep(i, N){
        if(S[i] == 'R') Rcnt++;
    }
    int ans = 0;
    for(int i = Rcnt; i < N; i++){
        if(S[i] == 'R') ans++;
    }
    cout << ans << endl;
    return 0;
}