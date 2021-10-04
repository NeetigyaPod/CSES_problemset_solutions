#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
long long fastmod(int n){
    if(n==1)
    return 2;
    long long ret=fastmod(n/2);
    if(n%2)
    return (ret%MOD*ret%MOD*2)%MOD;
    else
    return (ret%MOD*ret%MOD)%MOD;
}
int main(){
    int n;
    cin>>n;
    cout<<fastmod(n);
}