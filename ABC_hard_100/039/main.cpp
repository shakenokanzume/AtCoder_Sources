#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;
const int INF = 100000000;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    //1個の時はコーナーケースとして処理
    if (N == 1){
        cout << 0 << endl;
        return 0;
    }
    //最初は、最左端からみるので、右側にある白の数のみをwhiteに格納
    int white = 0, black = 0;
    rep(i, N){
        if (S[i] == '.') white++;
    }
    //最左端での、white+blackは、white（最左端から見た右側にある白の個数のため）に初期化する必要がある
    //ここでずっとWAを食らった（最初はINFにしていたため...）
    int ans = white;
    rep(i, N){
        if (S[i] == '#') black++;
        if (S[i] == '.') white--;
        ans = min(ans, black + white);
    }
    cout << ans << endl;
    return 0;
}
