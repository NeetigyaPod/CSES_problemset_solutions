#include<bits/stdc++.h>
using namespace std;
long long s1=0,s2=0,diff=LONG_LONG_MAX;
void part(int n,vector<long long> arr,int i){
    if(n>=arr.size()){
        diff=min(diff,abs(s2-s1));
    return;
    }
    if(i)
    s2+=arr[n];
    else
    s1+=arr[n];
    
    part(n+1,arr,0);
    part(n+1,arr,1);
    if(i)
    s2-=arr[n];
    else
    s1-=arr[n];
}
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    // s2+=arr[i];
    }
    part(0,arr,0);
    part(0,arr,1);
    cout<<diff;
}