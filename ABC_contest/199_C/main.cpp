#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
const int lim = 1000000007;

int main()
{
    int N, Q;
    string S;
    cin >> N >> S >> Q;

    // 文字列の前半/後半部分がswapされているかどうかを保存しておく
    bool is = false;

    rep(i, Q)
    {
        int t, a, b;
        cin >> t >> a >> b;
        a--, b--;
        if (t == 1)
        {
            // 前半/後半でのswapが行われていない場合
            if (!is)
            {
                char c;
                c = S[a];
                S[a] = S[b];
                S[b] = c;
            }
            else
            {
                // 前半/後半でのswapが行われている場合
                char c;
                int _a = a;
                int _b = b;
                if(a <= N-1) _a = a + N;
                if(a >= N) _a = a - N;
                if(b <= N-1) _b = b + N;
                if(b >= N) _b = b - N;
                c = S[_a];
                S[_a] = S[_b];
                S[_b] = c;
            }
        }
        else if (t == 2)
        {
            is = !is;
        }
    }
    if(is){
        cout << S.substr(N, N);
        cout << S.substr(0, N);
        cout << endl;
    }else{
        cout << S << endl;
    }
    return 0;
}