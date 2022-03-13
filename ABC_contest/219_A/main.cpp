#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int x;
    cin >> x;
    if(0 <= x && x < 40){
        cout << 40 - x << endl;
    }else if(40 <= x && x < 70){
        cout << 70 - x << endl;
    }else if(70 <= x && x < 90){
        cout << 90 - x << endl;
    }else if(90 <= x){
        cout << "expert" << endl;
    }
    return 0;
}