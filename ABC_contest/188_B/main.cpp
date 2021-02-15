#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    // 完全2分木のトーナメント表を左右半分に割って、左半分での最強と、右半分での最強を得る
    // firstに最大の選手iの番号iを、secondに最大の選手iのレートa[i]を入れる
    pair<int, int> l_p, r_p;
    l_p = make_pair(0, 0);
    r_p = make_pair(0, 0);

    rep(i, pow(2, N)){
        int a;
        cin >> a;
        if(i < pow(2, N-1)){
            if(l_p.second < a){
                l_p.second = a;
                l_p.first = i+1;
            }
        }else{
            if(r_p.second < a){
                r_p.second = a;
                r_p.first = i + 1;
            }
        }
    }
    if(l_p.second < r_p.second){
        cout << l_p.first << endl;
    }else{
        cout << r_p.first << endl;
    }
    return 0;
}