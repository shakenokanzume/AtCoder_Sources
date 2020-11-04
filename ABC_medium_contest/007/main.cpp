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
    string S;
    cin >> N >> S;
    int mx = 0;
    rep(i, N){
        set<char> a, b;
        rep(j, N){
            if(j <= i) a.insert(S.at(j));
            else b.insert(S.at(j));
        }
        int mx_now = 0;
        for(auto A : a) if(b.count(A) == 1) mx_now++;
        mx = max(mx, mx_now);
    }
    cout << mx << endl;
    return 0;
}