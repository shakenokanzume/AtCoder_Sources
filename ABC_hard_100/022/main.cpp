#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S;
    string T;
    cin >> S >> T;

    //変換表の配列
    vector<int> start(26, -1);
    vector<int> goal(26, -1);

    rep(i, (int)S.size()){
        //アルファベット(a~z)を、数字(0~25)に対応させる
        int a = S[i] - 'a';
        int b = T[i] - 'a';

        //startかgoalの変換表がすでに埋まっていた場合
        if(start[a] != -1 || goal[b] != -1){
            //新しく与えたい変換先（または変換元）が、すでにある変換表と一致しない場合、不可
            if(start[a] != b || goal[b] != a){
                cout << "No" << endl;
                return 0;
            }
        }
        //変換表の作成
        start[a] = b;
        goal[b] = a;
    }
    cout << "Yes" << endl;
    return 0;
}