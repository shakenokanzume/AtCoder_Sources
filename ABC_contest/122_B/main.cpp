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
    int mx = 0;
    int cnt = 0;
    for(int i = 0; i < N;){
        if(S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
            cnt++;
            mx = max(mx, cnt);
        }else{
            cnt = 0;
        }
        i++;
    }
    cout << mx << endl;
    return 0;
}