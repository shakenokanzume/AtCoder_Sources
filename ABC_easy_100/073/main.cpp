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
    ll N;
    cin >> N;
    int head; //最上位桁の数
    int keta = 1; //桁数
    ll num = N; //Nのコピー
    bool is_nine = true; //最上位桁以外がすべて9であるかどうかを判定する。
    while(1){
        if(num / 10 == 0){
            head = num;
            break;
        }else{
            if(num % 10 != 9) is_nine = false;
            num /= 10;
            keta++;
        }
    }
    int ans;
    if(is_nine){
        ans = head + 9 * (keta - 1);
    }else{
        ans = head + 9 * (keta - 1) - 1;
    }
    cout << ans << endl;
    return 0;
}