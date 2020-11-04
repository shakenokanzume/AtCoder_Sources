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
    ll K;
    cin >> N >> K;
    int A[N];
    rep(i, N) cin >> A[i];

    vector<int> ord(N+1, -1); //その町に何回目の移動できたことがあるかを格納
                              //-1が入っている場合は、まだ一度も来たことがないという意味
    vector<int> s; //何回目の移動かをカウントする役割また、どんな順番に町をたどったかを記憶している。

    ll now = 1; //現在居る町の番号（最初は町1から開始）
    while(ord[now] == -1){
        ord[now] = s.size();
        s.push_back(now);
        now = A[now-1];
    }
    int cycle = s.size() - ord[now];
    ll l = ord[now];

    if(K < l) cout << s[K] << endl;
    else{
        K -= l;
        K %= cycle;
        cout << s[l + K] << endl;
    }
    return 0;
}