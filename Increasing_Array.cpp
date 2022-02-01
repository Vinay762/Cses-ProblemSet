#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    long long ans = 0; 
    for(int i =1; i<n; i++){
        if(nums[i] < nums[i-1]){
            ans += nums[i-1]-nums[i];
            nums[i] = nums[i-1];
        }
    }
    cout<<ans;
    return 0;
}