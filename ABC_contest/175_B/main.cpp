#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<int> L(N);
    rep(i, N) cin >> L[i];
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                if(L[i] != L[j] && L[j] != L[k] && L[k] != L[i]){
                    if(L[i] + L[j] > L[k] && L[j] + L[k] > L[i] && L[k] + L[i] > L[j]) cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}