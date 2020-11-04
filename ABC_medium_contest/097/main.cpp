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
    int N;
    cin >> N;
    int sum = 0;
    int remove_num = 0;
    int mx = 0;
    //入力が1の場合はコーナーケースとして処理
    if(N == 1){
        cout << 1 << endl;
        return 0;
    }
    //入力が2以上の場合
    for(int i = 1; i <= N; i++){
        sum += i;
        mx = i;
        if(sum == N) break;
        else if(sum > N){
            remove_num = sum - N;
            break;
        }
    }
    for(int i = 1; i <= mx; i++){
        if(i == remove_num) continue;
        else{
            cout << i << endl;
        }
    }
    return 0;
}