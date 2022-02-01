#include <bits/stdc++.h>
using namespace std;

vector<string>ans;

void solution(int n,int A, int B, int C){
    if(n == 0)return;
    solution(n-1,A,C,B);
    ans.push_back(to_string(A)+" "+to_string(B));
    solution(n-1,C,B,A);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    solution(n,1,3,2);
    cout<<ans.size()<<"\n";
    for(string s : ans){
        cout<<s<<"\n";
    }
    return 0;
}