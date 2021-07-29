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

    int ans = 0;
    //区間内に存在するブロックの味の種類を格納する
    //この集合内に味が存在するかどうかで、rightを右にずらす範囲を定める。
    set<int> st;
    int right = 0;
    for(int left = 0; left < N; left++){
        //a[right]が区間内の集合に含まれない場合は、right++
        while(right < N && st.count(a[right]) == 0){
            st.insert(a[right]);
            right++;
        }

        ans = max(ans, right - left);

        if(right == left) right++;
        else st.erase(a[left]);
    }
    cout << ans << endl;
    return 0;   
}