#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int>&ans, int pos){
    vector<int>freq(10,0);
    int n=ans.size();
    for(int i=0;i<n;i++){
        freq[(ans[i]/pos)%10]++;
    }
    for(int i=1;i<=10;i++){
        freq[i]+=freq[i-1];
    }
    // int n=ans.size();
    vector<int>output(n);
    for(int i=n-1;i>=0;i--){
        output[--freq[(ans[i]/pos)%10]]=ans[i];
    }
    ans=output;
}
void radixsort(vector<int>&ans){
    int maxi=INT_MIN;
    for(auto x: ans){
        maxi=max(x, maxi);
    }
    for(int pos=1;maxi/pos>0;pos*=10){
        countsort(ans, pos);
    }
    
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
    radixsort(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
