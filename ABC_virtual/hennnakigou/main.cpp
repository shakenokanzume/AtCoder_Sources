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
    string O, E;
    cin >> O >> E;
    int min_len = (int)E.size();
    string pass;
    for(int i = 0; i < min_len; i++){
        pass += O.at(i);
        pass += E.at(i);
    }
    if((int)(O.size() - E.size()) == 1){
        pass += O.at(min_len);
    }
    cout << pass << endl;
    return 0;
}