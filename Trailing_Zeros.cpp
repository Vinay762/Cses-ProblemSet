#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;

    ll x = 5;
    ll ans = 0;
    
    while(x <= n){
        ans += n/x;
        x = x*5;
    }
    cout<<ans;
    return 0;
}