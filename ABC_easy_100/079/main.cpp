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
    ll N, A, B;
    cin >> N >> A >> B;
    ll sub = B - A;
    ll count = 0;
    if(sub % 2 == 0) count = sub / 2; //Aと、Bとの差が偶数であるとき、差を2で割った値分のラウンド数で戦える
    else{
        count = min(A-1, N-B) + 1 + (sub-1) / 2; //AとBの差が奇数であるとき、末端に近いほうの卓にいる人が、
                                                 //末端で勝ち負け1回してsubを1つ減らすことで、subが偶数になる。
    }
    cout << count << endl;
    return 0;
}