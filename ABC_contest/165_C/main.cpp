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
    int N, M, Q;
    cin >> N >> M >> Q;
    int a[Q], b[Q], c[Q], d[Q];
    rep(i, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];
    int all_mx = 0;
    for(int i = 1; i <= M; i++){
        int A[N];
        rep(j, N) A[j] = i;
        for(int j = N-1; j > 0; j--){
            int sum = 0;
            for(int k = 0; k < Q; k++){
                int sub = A[b[k] - 1] - A[a[k] - 1];
                if(sub == c[k]){
                    sum += d[k];
                }
            }
            all_mx = max(all_mx, sum);
            A[j]++;
        }
        rep(j, N) A[j] = i;
        for(int j = N-1; j >= 0; j--){
            for(int m = i; m <= M; m++){
                int sum = 0;
                for(int k = 0; k < Q; k++){
                    int sub = A[b[k] - 1] - A[a[k] - 1];
                    if(sub == c[k]){
                        sum += d[k];
                    }
                }
                all_mx = max(all_mx, sum);
                A[j]++;
            }
        }
    }
    cout << all_mx << endl;
    return 0;
}