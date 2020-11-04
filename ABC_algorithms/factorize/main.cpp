#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

//正整数Nの素因数分解を求める関数
//firstに素因数、secondに素因数の乗数が格納されているvector配列を返り値とする
vector<pair<int, int>> factorize(int N){
    vector<pair<int, int>> p;
    //割る数を2から探索開始
    for(int i = 2; i*i < N; i++){
        //割り切れないときはスキップ
        if(N % i != 0) continue;
        //素因数として登録
        p.emplace_back(i, 0);
        //乗数を求める
        while(N % i == 0){
            N /= i;
            p.back().second++;
        }
    }
    //Nが素数である場合はこの処理が行われる
    if(N != 1) p.emplace_back(N, 1);
    return p;
}

int main(){
    int N;
    cin >> N;
    //firstに素因数、secondに素因数の乗数が格納されているvector配列
    vector<pair<int, int>> f;
    f = factorize(N);
    //出力
    for(auto p : f){
        cout << "prime_factor is " << p.first << ", and the multipler is " << p.second << endl;
    }
    return 0;
}