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
   int len = (int)S.size();
   if(S[len-1] == '0' + 2 || S[len-1] == '0' + 4 || S[len-1] == '0' + 5 || S[len-1] == '0' + 7 || S[len-1] == '0' + 9){
       cout << "hon" << endl;
   }
   if(S[len-1] == '0' + 0 || S[len-1] == '0' + 1 || S[len-1] == '0' + 6 || S[len-1] == '0' + 8){
       cout << "pon" << endl;
   }
   if(S[len-1] == '0' + 3) cout << "bon" << endl;
   return 0;
}