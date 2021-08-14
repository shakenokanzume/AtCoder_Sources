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
    int K, X;
    cin >> K >> X;
    for(int i = X - K + 1; i <= X + K - 1; i++){
        cout << i << endl;
    }
    return 0;
}