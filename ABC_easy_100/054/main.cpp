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
    string W[N];
    rep(i, N) cin >> W[i];
    bool is_co = true;
    set<string> st;
    string pre = W[0];
    st.insert(W[0]);
    for(int i = 1; i < N; i++){
        if(st.count(W[i]) == 0 && *(pre.end()-1) == *(W[i].begin())){
            st.insert(W[i]);
        }else{
            is_co = false;
            break;
        }
        pre = W[i];
    }
    if(is_co){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}