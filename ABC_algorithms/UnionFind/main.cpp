#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
const int lim = 1000000007;

int N;

// UnionFindの構造体
struct UnionFind{
    // 各頂点が属する木の根の頂点番号を格納する
    // ただし、木の根に関しては、parent情報は必要ないため、木のサイズを格納する（ただし、サイズは符号が逆になっている）
    vector<int> parent_or_size;
    // 各頂点が属する木のランクを格納する
    vector<int> r;
    // コンストラクタ（初期状態では、各頂点の親頂点は未定ということで-1を入れておく）
    UnionFind(int N):parent_or_size(N), r(N){
        rep(i, N){
            parent_or_size[i] = -1;
            r[i] = 1;
        }
    }

    // ある頂点xの根を探索する
    int root(int x){
        // 入力した頂点番号が、木の根の場合はxを、そうでない場合は、再帰的にroot()関数の引数としてpar[x]を指定する
        if(parent_or_size[x] < 0) return x;
        else return parent_or_size[x] = root(parent_or_size[x]);
    }

    // 頂点xが属する木と、頂点yが属する木を併合する
    void unite(int x, int y){
        int root_x = root(x);
        int root_y = root(y);
        // 頂点x, yが属する木が異なる場合のみ併合処理を行う
        // 頂点xを含む木の根の親として、頂点yを含む木の根を設定する
        if(root_x == root_y) return;
        // どちらの木のランクも同じ時には、ランクが上がる
        if(r[root_x] == r[root_y]) r[y]++;
        // ランクが小さい方の木を、ランクの大きい木の根の下に引っ付ける
        if(r[root_x] > r[root_y]) swap(root_x, root_y);
        // root_xをroot_yにつなぐ（新たな木の根にはyを選択する）場合を考えている
        // root_yの親には、新しくできる木のサイズを格納する
        parent_or_size[root_y] += parent_or_size[root_x];
        parent_or_size[root_x] = root_y;
    }

    // 頂点xと頂点yが同じ木に属しているかどうかをチェック
    bool same(int x, int y){
        int root_x = root(x);
        int root_y = root(y);
        return root_x == root_y;
    }

    // 頂点xが属している木のサイズを求める
    int size(int x){
        int root_x = root(x);
        return -parent_or_size[root_x];
    }
};

int main(){
    cin >> N;
    vector<pair<int , pair<int, int>>> pr;
    rep(i, N-1){
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        pr.emplace_back(w, pair<int, int>(u, v));
    }
    sort(pr.begin(), pr.end());

    UnionFind tree(N);
    ll ans = 0;
    for(auto p : pr){
        int w = p.first;
        pair<int, int> e = p.second;
        int a = e.first;
        int b = e.second;
        ans += (ll)w * tree.size(a) * tree.size(b);
        tree.unite(a, b);
    }
    cout << ans << endl;
    return 0;
}