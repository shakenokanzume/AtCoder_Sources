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

int kaijou(int num){
    if(num == 1) return 1;
    else{
        int n = kaijou(num - 1) * num;
        return n;
    }
}

int main(){
    int N, K;
    cin >> N >> K;
    int all_num = 0;
    for(int i = K; i <= N + 1; K++){
        all_num += kaijou(N + 1) / (kaijou(N + 1 - i) * kaijou(i));
    }
}