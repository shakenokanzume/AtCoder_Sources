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
    int N, D;
    cin >> N >> D;
    int X[N][D];
    rep(i, N){
        rep(j, D){
            cin >> X[i][j];
        }
    }
    int count  = 0;
    rep(i, N){
        for(int j = i + 1; j < N; j++){
            if(i != j){
                double length_pre = 0;
                rep(m, D){
                    length_pre += pow(X[i][m] - X[j][m], 2);
                }
                double length_ans = sqrt(length_pre);
                if(length_ans == (int)length_ans){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}