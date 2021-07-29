#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    int a = 0, b = 0, c = 0, d = 0;
    rep(i, N){
        string s;
        cin >> s;
        if(s == "AC") a++;
        if(s == "WA") b++;
        if(s == "TLE") c++;
        if(s == "RE") d++;
    }
    printf("AC x %d\n", a);
    printf("WA x %d\n", b);
    printf("TLE x %d\n", c);
    printf("RE x %d\n", d);
    return 0;
}