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
    set<string> S;
    rep(i, N){
        string s;
        cin >> s;
        S.insert(s);
    }
    cout << (int)S.size() << endl;
    return 0;
}