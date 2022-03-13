#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<string> st = {"ABC", "ARC", "AGC", "AHC"};
    rep(i, 4)
    {
        if (st[i] != s1 && st[i] != s2 && st[i] != s3)
        {
            cout << st[i] << endl;
            return 0;
        }
    }
}