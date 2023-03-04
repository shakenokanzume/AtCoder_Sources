#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

int main(){
    int a, b; cin >> a >> b;
    vector<int> a_array;
    vector<int> b_array;

    if(a == 1) a_array.push_back(1);
    if(a == 2) a_array.push_back(2);
    if(a == 3){
        a_array.push_back(1);
        a_array.push_back(2);
    }
    if(a == 4) a_array.push_back(4);
    if(a == 5){
        a_array.push_back(1);
        a_array.push_back(4);
    }
    if(a == 6){
        a_array.push_back(2);
        a_array.push_back(4);
    }
    if(a == 7){
        a_array.push_back(1);
        a_array.push_back(2);
        a_array.push_back(4);
    }

    if(b == 1) b_array.push_back(1);
    if(b == 2) b_array.push_back(2);
    if(b == 3){
        b_array.push_back(1);
        b_array.push_back(2);
    }
    if(b == 4) b_array.push_back(4);
    if(b == 5){
        b_array.push_back(1);
        b_array.push_back(4);
    }
    if(b == 6){
        b_array.push_back(2);
        b_array.push_back(4);
    }
    if(b == 7){
        b_array.push_back(1);
        b_array.push_back(2);
        b_array.push_back(4);
    }

    int ans = 0;
    set<int> st;
    rep(i, (int)a_array.size()) st.insert(a_array[i]);
    rep(i, (int)b_array.size()) st.insert(b_array[i]);

    if(st.count(1)) ans += 1;
    if(st.count(2)) ans += 2;
    if(st.count(4)) ans += 4;
    cout << ans << endl;
    return 0;
}
