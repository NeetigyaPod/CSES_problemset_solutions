#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,out=0,fac=5;
    cin>>n;
    int pows=(int)(log(n)/log(5));
    while(pows>0){
        out+=n/fac;
        fac*=5;
        pows--;
    }
    cout<<out;
}