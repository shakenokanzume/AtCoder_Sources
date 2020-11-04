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
    int D, N;
    cin >> D >> N;
    int num = N;
    if(N != 100){
        for(int i = 0; i < D; i++){
            num *= 100;
        }
    }else{
        num++;
        for(int i = 0; i < D; i++){
            num *= 100;
        }
    }
    cout << num << endl;
    return 0;
}