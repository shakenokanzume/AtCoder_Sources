#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    if(s[0] == s[1] && s[0] == s[2]) cout << "Won" << endl;
    else cout << "Lost" << endl;
    return 0;
}