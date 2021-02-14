#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    string s, T;
    cin >> s >> T;
    int N = (int)s.size();
    // 条件を満たす鍵文字列を格納する配列
    vector<string> A;

    for(int i = 0; i <= N - (int)T.size(); i++){
        // 今から検証するsの部分文字列を取ってくる
        string t = s.substr(i, (int)T.size());
        bool is = true;
        rep(j, (int)T.size()){
            if(t[j] != '?' && t[j] != T[j]){
                is = false;
            }
        }
        if(is){
            string match = s.substr(0, i);
            match += T;
            match += s.substr(i + (int)T.size());
            rep(j, N) if(match[j] == '?') match[j] = 'a';
            A.push_back(match);
        }
    }
    sort(A.begin(), A.end());
    if(A.size() == 0){
        cout << "UNRESTORABLE" << endl;
    }else{
        cout << A[0] << endl;
    }
    return 0;
}