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

//�p����z��̏���
vector<int> a = {1, 3, 6, 7, 8, 10, 2, 5, 25, 35, 2, 10, 5, 8};

//itr�����]�̏����𖞂����Ă��邩�ǂ����𔻒�
//���̃v���O�����ł́Aa[index] >= key�ƂȂ��Ă���̂ŁA����́ukey�ȏ�ƂȂ�ŏ���index�v�����߂�B
bool isOK(int index, int key){
    if(a[index] >= key) return true;
    else return false;
}

//�񕪒T���̊֐��i����́ukey�ȏ�ƂȂ�ŏ���index�����߂�v�̂ŁAok���E���ɁAng�������Ɏ����Ă����B�j
int binary_search(int key){
    int ng = -1; //index = 0�������𖞂������Ƃ�����̂ŁA-1�ŏ�����
    int ok = (int)a.size(); //index = a.size()-1�������𖞂����Ȃ����Ƃ�����̂ŁAa.size()�ŏ�����

    //ok��ng�̂ǂ��炪�傫�����킩��Ȃ����Ƃ��l�����āAfabs(ok - ng)
    while(fabs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        //�����𖞂���index��ok�ɁA�������Ȃ�index��ng�ɑ��
        if(isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(){
    sort(a.begin(), a.end());
    int key = 5;
    int ans_itr = binary_search(key);
    int ans_min = a[ans_itr];
    int N = (int)a.size();
    rep(i, N) cout << a[i] << " ";
    cout << endl;
    printf("key(=%d)�ȏ�𖞂����ŏ��̒l�́A%d(itr=%d)�ł���B", key, ans_min, ans_itr);
    return 0;
}