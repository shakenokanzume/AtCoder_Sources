#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S;
    cin >> S;
    int size = (int)S.size();
    int length = 0;
    int max_length = 0;
    rep(i, size){
        if(S.at(i) == 'A' || S.at(i) == 'C' || S.at(i) == 'G' || S.at(i) == 'T'){
            length++;
            if(length > max_length){
                max_length = length;
            }
        }else{
            length = 0;
        }
    }

    cout << max_length << endl;

    return 0;
}