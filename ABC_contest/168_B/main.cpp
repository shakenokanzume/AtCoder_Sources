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
    int K;
    cin >> K;
    string S;
    cin >> S;
    int len = (int)S.size();
    if(len <= K) cout << S << endl;
    else{
        string s = S.substr(0, K);
        cout << s << "..." << endl;
    }
    return 0;
}