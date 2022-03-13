#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    if(N >= 42){
        printf("AGC");
        printf("%03d\n", N+1);
    }else{
        printf("AGC");
        printf("%03d\n", N);
    }
    return 0;
}