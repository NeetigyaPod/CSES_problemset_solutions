#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long y,x,dom,close,output;
        cin>>y>>x;
        dom=max(y,x);
        close=dom*dom;
        if(dom%2)
        output=close-(y-1)-(dom-x);
        else
        output=close-(dom-y)-(x-1);
        cout<<output<<endl;
    }
}