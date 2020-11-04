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
    int a[N];
    int b[N];
    rep(i, N){
        cin >> a[i];
        b[i] = a[i];
    }
    int max = 0, next_max = 0;
    sort(b, b + N, greater<int>());
    max = b[0];
    next_max = b[1];
    
    rep(i, N){
        if(a[i] == max){
            cout << next_max << endl;
        }else{
            cout << max << endl;
        }
    }

    return 0;
}