#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int T;
    cin >> T;
    int N;
    cin >> N;
    queue<int> a;
    rep(i, N){
        int A;
        cin >> A;
        a.push(A);
    }
    int M;
    cin >> M;
    vector<int> b(M);
    rep(i, M) cin >> b[i];

    rep(i, M){
        // aのサイズを予め取っておく(ループ内で要素数が変化するため)
        int len = (int)a.size();
        // 各お客さんに対して、たこ焼きを提供できるかどうかを格納
        bool is = false;
        rep(j, len){
            // お客さんに提供できるたこやきがあるかどうか確認
            if(b[i] - a.front() <= T && b[i] - a.front() >= 0){
                is = true;
                a.pop();
                break;
            }else{
                // 提供できるたこやきがなければ則終了
                a.pop();
            } 
        }
        if(!is){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}