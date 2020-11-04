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
    int A[N];
    int cnt = 0; //A[i]が偶数である物を数える
    rep(i, N){
        cin >> A[i];
        if(A[i] % 2 == 0){
            cnt++;
        }
    }
    int ans = pow(3, N) - pow(2, cnt); //すべての場合の数から、整数列bの積が偶数になりえない
                                       //ような場合の数を引いた。
    cout << ans << endl;
    return 0;
}