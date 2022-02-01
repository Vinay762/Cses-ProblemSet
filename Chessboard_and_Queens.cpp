#include <bits/stdc++.h>
using namespace std;

bool col[16], diag1[16], diag2[16], reserved[8][8];
using ll = long long;

ll ways;

void search(ll r){
    if(r == 8){
        ways++;
        return;
    }
    for(ll c = 0; c<8; c++){
        if(col[c] || diag1[r+c] || diag2[r-c+7] || reserved[r][c])continue;
        col[c] = diag1[r+c] = diag2[r-c+7] = true;
        search(r+1);
        col[c] = diag1[r+c] = diag2[r-c+7] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i<16; i++){
        col[i] = diag1[i] = diag2[i] = false;
    }

    string x;
    for(int i = 0; i<8; i++){
        cin>>x;
        for(int j = 0; j<8; j++){
            if(x[j] == '*')reserved[i][j] = true;
        }
    }

    search(0);
    cout<<ways;
    return 0;
}