#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int K;
    cin >> K;
    int sum = 0;

    for(int a = 1; a <= K; a++){
        for(int b = 1; b <= K; b++){
            for(int c = 1; c <= K; c++){
                int d = min({a, b, c});
                int gcd = 1;
                for(int i = d; i >= 1; i--){
                    if(a % i == 0 && b % i == 0 && c % i == 0){
                        gcd = i;
                        break;
                    }
                }
                sum += gcd;
            }
        }
    }

    cout << sum << endl;

    return 0;
}