#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ar[n],maxtill[n],output=0;
    for(int i=0;i<n;i++)
    {
        
        cin>>ar[i];
        if(i==0)
        maxtill[i]=ar[i];
        else
        {
            if(ar[i]<maxtill[i-1]){
            output=output+maxtill[i-1]-ar[i];
            maxtill[i]=maxtill[i-1];}
            else
            maxtill[i]=ar[i];
        }
    }
    cout<<output<<endl;
    
}