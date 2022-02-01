#include <bits/stdc++.h>
using namespace std;

vector<string>solution(int n){
    if(n == 1){
        return {"0","1"};
    }
    vector<string>rres = solution(n-1);
    vector<string>mres;
    for(int i = 0; i<rres.size(); i++){
        string str = rres[i];
        mres.push_back("0"+str);
    }
    for(int i = rres.size()-1; i>=0; i--){
        string str = rres[i];
        mres.push_back("1"+str);
    }
    return mres;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string>ans = solution(n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}