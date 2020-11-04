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
    int a[N];
    rep(i, N) cin >> a[i];
    int check_num = 1;
    int break_count = 0;
    for(int i = 0; i < N; i++){
        if(a[i] == check_num){
            check_num++;
        }else{
            break_count++;
        }
    }
    if(break_count == N) cout << -1 << endl;
    else cout << break_count << endl;
    return 0;
}