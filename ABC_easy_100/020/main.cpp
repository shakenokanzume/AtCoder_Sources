#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int s;
    cin >> s;
    set<int> st;
    int x = s;
    while(st.count(x) == 0){
        st.insert(x);
        if(x % 2 == 1){
            x = 3 * x + 1;
        }else{
            x /= 2;
        }
    }

    cout << st.size() + 1 << endl;

    return 0;
}