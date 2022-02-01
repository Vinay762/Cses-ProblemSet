#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<int>count(26,0);
    for(char ch : s){
        count[ch-'A']++;
    }
    int odd = 0;
    for(int i = 0; i<26; i++){
        if(count[i]%2)odd++;
        if(odd > 1){
            cout<<"NO SOLUTION";
            return 0;
        }
    }

    int i = 0, j = s.size()-1;
    int n = s.size();
    vector<char>ans(n);

    for(int k = 0; k<26; k++){
        if(count[k]%2){
            ans[n/2] = k+'A';
            count[k]--;
            k--;
        }else{
            while(count[k]>1){
                ans[i++] = k+'A';
                ans[j--] = k+'A';
                count[k] = count[k]-2;
            }           
        }       
    }
    for(char ch : ans){
        cout<<ch;
    }
    return 0;
}