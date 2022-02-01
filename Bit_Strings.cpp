#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin>>n;
    int mod = 1e9+7;
    ll s = 1;
    for(int i = 0; i<n; i++){
        s = (s*2)%mod;
    }
    cout<<s;
    return 0;
}