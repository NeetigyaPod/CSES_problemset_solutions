#include<bits/stdc++.h>
using namespace std;
long long helper(int k){
    return 4*(k-1)*(k-2);
}
long long comb(int k){
    long long n=k*k;
    return n*(n-1)/2;
}
int main(){
    int n;
    cin>>n;
    for(int k=1;k<=n;k++){
        cout<<comb(k)-helper(k)<<endl;
    }
}