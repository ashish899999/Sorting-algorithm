#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void bucketsort(vector<float>&ans){
 // creating bucket
 int n=ans.size();
 float mini=ans[0];
 float maxi=ans[0];
 vector<vector<float>>bucket(n,vector<float>());
      for(int i=0;i<n;i++){
          mini=min(mini,ans[i]);
          maxi=max(maxi, ans[i]);
      }
      float range=(maxi-mini)/n;
     for(int i=0;i<n;i++){
         int index=(ans[i]-mini)/range;
         float diff=((ans[i]-mini)/range)-index;
         if(diff==0 && ans[i]!=mini){
            bucket[index-1].push_back(ans[i]);
         }
         else {
         bucket[index].push_back(ans[i]);
         }
     }
     for(int i=0;i<n;i++){
         if(!bucket[i].empty()){
    sort(bucket[i].begin(),bucket[i].end());
         }
     }
     int k=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<bucket[i].size();i++){
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
    bucketsort(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
