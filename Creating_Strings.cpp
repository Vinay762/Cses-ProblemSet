#include <bits/stdc++.h>
using namespace std;

void recursion(string nums, int s, int e, vector<string>& ans){
    if(s == e){
        ans.push_back(nums);
        return;
    }
    for(int i = s; i<=e; i++){
        if(i != s and nums[i] == nums[s])continue;
        swap(nums[i],nums[s]);
        recursion(nums, s+1, e, ans);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    vector<string>ans;
    recursion(str,0,str.size()-1,ans);
    cout<<ans.size()<<"\n";
    for(string s : ans){
        cout<<s<<"\n";
    }
    return 0;
}