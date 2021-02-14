#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<stack<int>> s;

    rep(i, N){
        int w;
        cin >> w;
        // 今運んできた段ボールと、すでに作られている山の最も上に積まれている段ボールの差の最小を格納
        int min = lim;
        // 最小となる段ボールの山の番号を格納
        int min_i = 0;
        rep(j, (int)s.size()){
            if(s[j].top() >= w){
                int sub = s[j].top() - w;
                if(min > sub){
                    min = sub;
                    min_i = j;
                }
            }
        }
        // すでに作られている段ボールの山には置けないとき（新しい山を作るとき）
        if(min == lim){
            stack<int> a;
            a.push(w);
            s.push_back(a);
        }else{ 
            // すでに作られている段ボールの山に積み重ねられる時
            s[min_i].push(w);
        }
    }

    // スタック内容確認用のコード
    /*
    int si = (int)s.size();
    rep(i, si){
        int v = (int) s[i].size();
        rep(j, v){
            cout << s[i].top() << " ";
            s[i].pop();
        }
        cout << endl;
    }
    */
   
    cout << s.size() << endl;
    return 0;
}