#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    int val = 1000;
    if(N % val == 0){
        cout << 0 << endl;
        return 0;
    }else{
        cout << val - (N % val) << endl;
        return 0;
    }
}