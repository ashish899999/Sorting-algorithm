#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int>&ans){
    int n=ans.size();
    int maxi=INT_MIN;
    for(auto x: ans){
        maxi=max(x, maxi);
    }
    vector<int>freq(maxi+1,0);
    for(int i=0;i<n;i++){
        freq[ans[i]]++;
    }
    for(int i=1;i<=maxi;i++){
        freq[i]+=freq[i-1];
    }
    vector<int>output(n);
    for(int i=n-1;i>=0;i--){
        output[--freq[ans[i]]]=ans[i];
    }
    ans=output;
}
int main(){
    int n;
    cin>>n;
    int a;
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>a;
        ans.push_back(a);
    }
    countsort(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
