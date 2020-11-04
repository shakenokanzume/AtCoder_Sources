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
    int a, b;
    cin >> a >> b;
    if(a > 0){
        cout << "Positive" << endl;
    }else if(a <= 0 && b >= 0){
        cout << "Zero" << endl;
    }else if(b < 0){
        int pos_count = b - a + 1;
        int is = pow(-1, pos_count);
        if(is == 1){
            cout << "Positive" << endl;
        }else if(is == -1){
            cout << "Negative" << endl;
        }else{
            cout << "Error" << endl;
        }
    }else{
        cout << "Error_2" << endl;
    }

    return 0;
}