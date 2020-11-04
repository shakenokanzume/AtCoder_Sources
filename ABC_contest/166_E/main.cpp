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
    ll A[N+1];
    for(int i = 1; i < N + 1; i++) cin >> A[i];
    map<int, int> mp; //keyにA[i] + iの値を、valueに、j番目までで出てきたA[i] + iの個数を代入する
    ll ans = 0;
    for(int i = 1; i < N + 1; i++){
        int right = i - A[i]; //jの値とみる
        ans += mp[right];
        int left = i + A[i]; //iの値とみる
        mp[left]++; //leftに該当するkeyがない場合は自動で生成されて、1が代入される。
    }
    cout << ans << endl;
    return 0;
}