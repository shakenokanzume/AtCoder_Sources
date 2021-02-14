#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

struct point_info{
    int x;
    int y;
};

int main(){
    int N;
    cin >> N;
    vector<struct point_info> red(N), blue(N);
    rep(i, N){
        int a, b;
        cin >> a >> b;
        red[i].x = a;
        red[i].y = b;
    }
    rep(i, N){
        int c, d;
        cin >> c >> d;
        blue[i].x = c;
        blue[i].y = d;
    }

    // 青い点の集合について、x座標が小さい順に並び替える
    sort(blue.begin(), blue.end(), [](struct point_info a, struct point_info b){return a.x < b.x;});
    // すでにペアの作られた赤点の番号を格納
    set<int> st;

    int ans = 0;
    for(int i = 0; i < N; i++){
        // blue[i]の青点より、x, y座標ともに小さい赤点のなかで、最もy座標が大きなものを選ぶ
        int max = -1;
        int max_i = 0;
        for(int j = 0; j < N; j++){
            if(red[j].x < blue[i].x && red[j].y < blue[i].y && st.count(j) == 0){
                if(max < red[j].y){
                    max = red[j].y;
                    max_i = j;
                }
            }
        }
        if (max != -1)
        {
            st.insert(max_i);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}