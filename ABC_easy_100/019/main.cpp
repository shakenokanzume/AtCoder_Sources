#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N, M, X;
    cin >> N >> M >> X;
    int A[M];
    rep(i, M){
        cin >> A[i];
    }

    int count_head = 0;
    int count_tail = 0;
    rep(i, M){
        if(A[i] < X){
            count_head++;
        }else if(A[i] > X){
            count_tail++;
        }else{
            cout << -1 << endl;
        }
    }

    cout << min(count_head, count_tail) << endl;

    return 0;
}