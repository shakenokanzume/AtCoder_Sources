#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    int b[N];
    for(int i = 0; i < N; i++){
        cin >> b[i];
    }

    int checker[3][3] = {0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < N; k++){
                if(b[k] == A[i][j]){
                    checker[i][j] = 1;
                    break;
                }
            }
        }
    }

    bool is_bingo = false;

    for(int i = 0; i < 3; i++){
        int sum_yoko = 0;
        int sum_tate = 0;
        for(int j = 0; j < 3; j++){
            sum_yoko += checker[i][j];
            sum_tate += checker[j][i];
        }

        if(sum_yoko == 3 || sum_tate == 3){
            is_bingo = true;
            break;
        }
    }

    if(checker[0][0] + checker[1][1] + checker[2][2] == 3 ||
    checker[0][2] + checker[1][1] + checker[2][0] == 3){
        is_bingo = true;
    }

    if(is_bingo){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}