#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;


int GCD(int a, int b){
    if(b == 0) return a;
    else return GCD(b, a % b);
}

void factorize(int N, vector<int> &p){
    for(int i = 2; i*i <= N; i++){
        if(N % i != 0) continue;
        // 割り切れる場合
        p[i]++;
        // 割れるだけ割る
        while(N % i == 0){
            N /= i;
        }
    }
    // Nが素数の場合の処理
    if(N != 1) p[N]++;
}

void factorize_ano(int N, vector<int> &p){
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i != 0)
            continue;
        // 割り切れる場合
        p.push_back(i);
        // 割れるだけ割る
        while (N % i == 0)
        {
            N /= i;
        }
    }
    // Nが素数の場合の処理
    if (N != 1) p.push_back(N);
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    vector<int> prime_factors(100001);
    rep(i, N){
        factorize(a[i], prime_factors);
    }

    vector<int> ans;
    int cnt = 0;
    for(int i = 1; i <= M; i++){
        vector<int> factors;
        factorize_ano(i, factors);

        bool is = true;
        for(auto q : factors){
            if(prime_factors[q] != 0){
                is = false;
                break;
            }
        }
        if(is){
            cnt++;
            ans.push_back(i);
        }
    }
    cout << cnt << endl;
    for(auto q : ans) cout << q << endl;
    return 0;
}