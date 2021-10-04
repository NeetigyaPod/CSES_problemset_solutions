#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(!a&&!b){
        cout<<"YES"<<endl;
        continue;}
        else if(!a||!b){
        cout<<"NO"<<endl;
        continue;
        }
        if(2*a-b<0||2*b-a<0)
        cout<<"NO"<<endl;
        else if((2*a-b)%3||(2*b-a)%3)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        // if(!(a&&b)){
        // cout<<"YES"<<endl;
        // continue;}
        // else if(!a||!b){
        // cout<<"NO"<<endl;/]
        // else if(2*b<a||a<2*b)
        // cout<<"NO"<<endl;
        // else if(!(a%3&&b%3)||(a%2==0&&))

    }
}