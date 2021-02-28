#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<string> words;

    for(int cnt_a = N; cnt_a >= 0; cnt_a--){
        for(int cnt_b = N - cnt_a; cnt_b >= 0; cnt_b--){
            int cnt_c = N - (cnt_a + cnt_b);

            string s = "";
            rep(i, cnt_a) s += 'a';
            rep(i, cnt_b) s += 'b';
            rep(i, cnt_c) s += 'c';
            sort(s.begin(), s.end());
            do{
                words.push_back(s);
            }while(next_permutation(s.begin(), s.end()));
        }
    }
    sort(words.begin(), words.end());
    for(auto p : words){
        cout << p << endl;
    }
    return 0;
}