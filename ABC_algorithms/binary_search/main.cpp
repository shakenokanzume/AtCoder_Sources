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

//用いる配列の準備
vector<int> a = {1, 3, 6, 7, 8, 10, 2, 5, 25, 35, 2, 10, 5, 8};

//itrが所望の条件を満たしているかどうかを判定
//下のプログラムでは、a[index] >= keyとなっているので、今回は「key以上となる最小のindex」を求める。
bool isOK(int index, int key){
    if(a[index] >= key) return true;
    else return false;
}

//二分探索の関数（今回は「key以上となる最小のindexを求める」ので、okを右側に、ngを左側に持ってきた。）
int binary_search(int key){
    int ng = -1; //index = 0が条件を満たすことがあるので、-1で初期化
    int ok = (int)a.size(); //index = a.size()-1が条件を満たさないことがあるので、a.size()で初期化

    //okかngのどちらが大きいかわからないことを考慮して、fabs(ok - ng)
    while(fabs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        //条件を満たすindexにokに、満たさないindexはngに代入
        if(isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(){
    sort(a.begin(), a.end());
    int key = 5;
    int ans_itr = binary_search(key);
    int ans_min = a[ans_itr];
    int N = (int)a.size();
    rep(i, N) cout << a[i] << " ";
    cout << endl;
    printf("key(=%d)以上を満たす最小の値は、%d(itr=%d)である。", key, ans_min, ans_itr);
    return 0;
}