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
    int A[2][N];
    rep(i, 2){
        rep(j, N){
            cin >> A[i][j];
        }
    }
    int mx = 0;
    for(int i = 0; i < N; i++){
        int sum = 0;
        int line = 0;
        for(int j = 0; j < N; j++){
            sum += A[line][j];
            if(i == j){
                line++;
                sum += A[line][j];
            }
        }
        mx = max(mx, sum);
    }
    cout << mx << endl;
    return 0;
}