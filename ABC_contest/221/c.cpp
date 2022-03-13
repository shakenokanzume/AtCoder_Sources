#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string N;
    cin >> N;
    int len = (int)N.size();
    sort(N.begin(), N.end());
    ll mx = 0;
    do{
        string head, tail;
        for(int i = 1; i < len; i++){
            head = N.substr(0, i);
            tail = N.substr(i);
            ll head_i = (ll)stoi(head);
            ll tail_i = (ll)stoi(tail);
            mx = max(mx, head_i * tail_i);
        }
    }while(next_permutation(N.begin(), N.end()));

    cout << mx << endl;
    return 0;
}