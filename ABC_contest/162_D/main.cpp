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
    cin >> S;

    long long r = 0, g = 0, b = 0; //R, B, Bの出現回数
    long long full = 0; //第1の条件を満たすような組み合わせの数
    for(long long i = 0; i < N; i++){
        if(S.at(i) == 'R'){
        	r++;
        }else if(S.at(i) == 'G'){
        	g++;
        }else{
        	b++;
        }
    }

    full = r * g * b;

    long long sub = 0; //第1の条件を満たして、克、第2の条件を満たさなかった場合の組み合わせの数
    for(long long i = 0; i < N; i++){
        for(long long j = i + 1; j < N; j++){
            if(S.at(i) == S.at(j)) continue;
            long long k = 2 * j - i;
            if(k >= N || S.at(k) == S.at(i) || S.at(k) == S.at(j)){
                continue;
            }

            sub++;
        }
    }

    cout << full - sub << endl;

    return 0;
}
