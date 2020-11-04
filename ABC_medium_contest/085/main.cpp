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
    string S;
    cin >> S;
    int N = (int)S.size();
    //与えられた文字列が26文字未満であった場合の処理
    vector<bool> used(30, false);
    if(N != 26){
        char w;
        rep(i, N) used[S[i] - 'a'] = true;
        rep(i, 26){
            if(!used[i]){
                w = char(i + 'a');
                break;
            }
        }
        S.push_back(w);
        cout << S << endl;
        return 0;
    }else{
        //与えられた文字列が26文字であった時の処理
        string T;
        T = S;
        //文字列Sを、順列で次に大きい物にする
        bool exist = next_permutation(S.begin(), S.end());
        //next_permutationは次の順列が存在しない場合falseを返すため、コーナーケースを除外する
        if(!exist){
            cout << -1 << endl;
            return 0;
        }
        string ans;
        rep(i, N){
            ans.push_back(S[i]);
            //順列で次に大きな文字列で不要な部分をそぎ落とす
            if(S[i] > T[i]){
                break;
            }
        }
        cout << ans << endl;
        return 0;
    }
}