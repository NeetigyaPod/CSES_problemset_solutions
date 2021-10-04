#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum1=0,sum2=0,sumo[n],sumt[n],index1=0,index2=0,cop=n;
    while(n>0){
        if(sum1>sum2){
        sum2+=n;sumo[index1++]=n;}
        else{
        sum1+=n;sumt[index2++]=n;}
        n--;
    }
    if(sum1==sum2){
        cout<<"YES"<<endl;
        cout<<index1<<endl;
        for(int i=index1-1;i>=0;i--)
        cout<<sumo[i]<<" ";
        cout<<endl<<index2<<endl;
        for(int i=index2-1;i>=0;i--)
        cout<<sumt[i]<<" ";
    }
    else
    cout<<"NO";
}