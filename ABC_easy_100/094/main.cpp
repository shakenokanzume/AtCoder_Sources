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
    int A = (int)(S.at(0) - '0');
    int B = (int)(S.at(1) - '0');
    int C = (int)(S.at(2) - '0');
    int D = (int)(S.at(3) - '0');
    int AB, AC, AD;
    char a[2];
    a[0] = '+', a[1] = '-';
    for(int i = 0; i < 2; i++){
        if(i == 0) AB = A + B;
        else AB = A - B;
        for(int j = 0; j < 2; j++){
            if(j == 0) AC = AB + C;
            else AC = AB - C;
            for(int k = 0; k < 2; k++){
                if(k == 0) AD = AC + D;
                else AD = AC - D;
                if(AD == 7){
                    cout << A << a[i] << B << a[j] << C << a[k] << D << "=7" << endl;
                    return 0;
                }
            }
        }
    }
}