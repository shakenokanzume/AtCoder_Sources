#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

int main()
{
    int H, W, X, Y;
    cin >> H >> W >> Y >> X;
    X--, Y--;
    vector<string> s(H);
    rep(i, H)
    {
        cin >> s[i];
    }

    int cnt = 0;

    const vector<int> dx = {0, 1, 0, -1};
    const vector<int> dy = {1, 0, -1, 0};
    rep(i, 4)
    {
        int x = X, y = Y;
        while (1)
        {
            if (y < 0 || x < 0 || y >= H || x >= W)
                break;
            if (s[y][x] == '#')
                break;
            if (s[y][x] == '.')
                cnt++;
            x += dx[i];
            y += dy[i];
        }
    }
    cout << cnt -3 << endl;
    return 0;
}