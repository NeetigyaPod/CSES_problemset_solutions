#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n],maxeven=0,maxodd=0;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n<4){
    cout<<"NO SOLUTION";return 0;}
    if(n%2){
    maxodd=n;maxeven=n-1;}
    else{
    maxeven=n;maxodd=n-1;}
    int index=0;
    while(maxodd>0)
    {
        ar[index++]=maxodd;
        maxodd-=2;
    }
    while(maxeven>0)
    {
        ar[index++]=maxeven;
        maxeven-=2;
    }
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
}