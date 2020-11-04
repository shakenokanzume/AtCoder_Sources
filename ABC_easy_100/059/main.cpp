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
    bool is_pro = true;
    int is_C = false;
    int cap_count = 0;
    for(int i = 0; i < (int)S.size(); i++){
        if(i == 0){
            if(S[i] == 'A'){
                cap_count++;
                continue;
            }else{
                is_pro = false;
                break;
            }
        }
        if(S[i] >= 'A' && S[i] <= 'Z'){
            cap_count++;
        }
        if(i >= 2 && i <= (int)S.size()-2){ 
            if(S.at(i) == 'C') is_C = true;
        }
    }
    if(cap_count == 2 && is_pro && is_C){
        cout << "AC" << endl;
    }else{
        cout << "WA" << endl;
    }
    return 0;
}