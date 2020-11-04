#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long long N;
    cin >> N;

    long long sum = 0;
    for(long long i = 1; i <= N; i++){
        if(i % 3 != 0 && i % 5 != 0){
            sum += i;  
        }
    }

    cout << sum << endl;

    return 0;
}