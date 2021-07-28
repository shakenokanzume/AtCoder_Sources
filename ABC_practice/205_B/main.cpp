#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    vector<int> array(N);
    rep(i, N) array[i] = i+1;

    sort(a.begin(), a.end());
    if(equal(a.begin(), a.end(), array.begin(), array.end())){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}