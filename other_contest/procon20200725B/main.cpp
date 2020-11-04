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
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    int count = 0;
    while(A >= B){
        B *= 2;
        count++;
    }
    while(B >= C){
        C *= 2;
        count++;
    }
    if(count <= K) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}