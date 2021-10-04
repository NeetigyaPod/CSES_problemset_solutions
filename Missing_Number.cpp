#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n-1;i++){
    int index;
    cin>>index;
    ar[index]=1;
    }
    for(int i=1;i<=n;i++)
    if(ar[i]!=1)
    cout<<i<<endl;
}