#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int N = (int)s.size();

    deque<char> t;
    int cnt = 0;
    rep(i, N){
        if(s[i] == 'R'){
            cnt++;
        }else{
            // 末尾側を見る場合
            if(cnt % 2 == 0){
                if(!t.empty() && t.back() == s[i]){
                    t.pop_back();
                }else{
                    t.push_back(s[i]);
                }
            }else{
                // 先頭側を見る場合
                if(!t.empty() && t.front() == s[i]){
                    t.pop_front();
                }else{
                    t.push_front(s[i]);
                }
            }
        }
    }
    // 表示
    string ans = "";
    while(!t.empty()){
        ans.push_back(t.front());
        t.pop_front();
    }

    if(cnt % 2 == 0){
        cout << ans << endl;
    }else{
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}