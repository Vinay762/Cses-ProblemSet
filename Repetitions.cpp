#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int n = s.size();
    int maxi = 1;
    int cmaxi = 1;
    for(int i = 1; i<n; i++){
        if(s[i] == s[i-1]){
            cmaxi++;
            maxi = max(maxi,cmaxi);
        }else{
            cmaxi = 1;
        }
    }
    cout<<maxi;
    return 0;
}