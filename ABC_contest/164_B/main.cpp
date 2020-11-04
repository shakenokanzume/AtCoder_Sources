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
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    for(int i = 0; ; i++){
        if(i % 2 == 0){
            C -= B;
            if(C <= 0){
                cout << "Yes" << endl;
                break;
            }
        }else{
            A -= D;
            if(A <= 0){
                cout << "No" << endl;
                break;
            }
        }
    }
    return 0;
}