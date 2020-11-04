#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;

    string S;
    S = to_string(N);
    int length = (int)S.size();
    bool is_s = false;
    for(int i = 0; i < length; i++){
        if(S.at(i) == '7'){
            is_s = true;
            break;
        }
    }

    if(is_s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}