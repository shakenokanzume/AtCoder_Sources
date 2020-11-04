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
    int N, M;
    cin >> N >> M;
    vector <int> K(N);
    vector <vector<int>> A(N, vector<int>(M));
    int count[M] = {0};
    rep(i, N){
        cin >> K[i];
        rep(j, K[i]){
            cin >> A[i][j];
            count[A[i][j] - 1]++;
        }
    }
    int num = 0;
    rep(i, M){
        if(count[i] == N) num++;
    }

    cout << num << endl;
    return 0;
}