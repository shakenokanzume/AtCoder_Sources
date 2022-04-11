#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    deque<int> deq;
    deq.push_back(n);
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'L'){
            deq.push_back(i);
        }else if(s[i] == 'R'){
            deq.push_front(i);
        }
    }
    rep(i, n+1){
        cout << deq.front() << " ";
        deq.pop_front();
    }
    cout << endl;
    return 0;
}