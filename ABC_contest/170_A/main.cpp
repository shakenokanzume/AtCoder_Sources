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
    vector<int> x;
    int a;
    int cnt = 1;
    while(1){
        cin >> a;
        if(a == 0){
            cout << cnt << endl;
            break;
        }
        cnt++;
    }
    return 0;
}