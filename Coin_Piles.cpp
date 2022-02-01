#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        ll a,b;
        cin>>a>>b;
        if((a+b)%3 == 0 && 2*a >= b && 2*b >= a){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}