#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];

    vector<int> sorted(p.size());
    copy(p.begin(), p.end(), sorted.begin());
    sort(sorted.begin(), sorted.end());

    rep(i, N){
        rep(j, N){
            vector<int> array(p.size());
            copy(p.begin(), p.end(), array.begin());

            int sw = array[i];
            array[i] = array[j];
            array[j] = sw;

            if(equal(sorted.begin(), sorted.end(), array.begin())){
                cout << "YES" << endl;            
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}