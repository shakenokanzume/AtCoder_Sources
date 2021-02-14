#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s;
    cin >> s;
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == 0) printf("\"");
    rep(i, (int)s.size()){
        printf("%c", s[i]);
        if(i == a-1 || i == b-1 || i == c-1 || i == d-1) printf("\""); 
    }
    printf("\n");
    return 0;
}