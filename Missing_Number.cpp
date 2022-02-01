#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int x = 0;
    for(int i = 1; i<=n; i++)x = x^i;
    int a;
    for(int i = 0; i<n-1; i++){
        cin>>a;
        x = x^a;
    }
    cout<<x;
    return 0;
}