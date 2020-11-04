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
    string S;
    cin >> S;
    int min = 1000;
    int a = 753;
    for(int i = 0; i + 2 < (int)S.size(); i++){
        string y = S.substr(i, 3);
        int x = stoi(y);
        if(min > abs(a - x)) min = abs(a - x);
    }

    cout << min << endl;
    return 0;
}