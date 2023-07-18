#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&ans, int start , int end){
    int pivot=ans[end];
    int i=start-1;
    for(int j=start; j<end;j++){
        if(ans[j]>pivot){
            j++;
        }
        if(ans[j]<pivot){
            i++;
            swap(ans[i], ans[j]);
        }
    }
    swap(ans[i+1], ans[end]);
    return i+1;
}
void quicksort(vector<int>&ans, int start, int end){
    if(start>=end) return ;
    int pi=partition(ans, start, end);
    quicksort(ans, start, pi-1);
    quicksort(ans, pi+1, end);
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
    quicksort(ans, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
