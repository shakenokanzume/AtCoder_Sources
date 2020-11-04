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
    string s;
    cin >> s;
    int q;
    cin >> q;
    string head_s;      //先頭側の文字列
    string tail_s = s;  //末尾側の文字列
    rep(i, q){
        int a;
        cin >> a;       //Tのこと
        if(a == 1){
            swap(head_s, tail_s);   //T = 1の時には、先頭部分と末尾部分の配列をswapする
        }else{
            int f;
            char c;
            cin >> f >> c;
            if(f == 1) head_s.push_back(c);     //それぞれの配列にcを追加する
            else tail_s.push_back(c);
        }
    }
    reverse(head_s.begin(), head_s.end());      //先頭側の配列には、昔入れた文字が先頭から並んでいるので、逆転させる
    s = head_s + tail_s;    //先頭と末尾文字列を統合
    cout << s << endl;
    return 0;
}