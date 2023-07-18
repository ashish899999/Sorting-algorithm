#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void bucketsort(vector<float>&ans){
 // creating bucket
 int n=ans.size();
 vector<vector<float>>bucket(n,vector<float>());
     for(int i=0;i<n;i++){
         int index=ans[i]*n;
         bucket[index].push_back(ans[i]);
     }
     for(int i=0;i<n;i++){
         if(!bucket[i].empty()){
    sort(bucket[i].begin(),bucket[i].end());
         }
     }
     int k=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<bucket[i].size();j++){
             ans[k++]=bucket[i][j];
         }
     }
}
int main(){
    int n;
    cin>>n;
    float a;
    vector<float>ans;
    for(int i=0;i<n;i++){
        cin>>a;
        ans.push_back(a);
    }
    // bucketsort(ans);
    bucketsort(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
