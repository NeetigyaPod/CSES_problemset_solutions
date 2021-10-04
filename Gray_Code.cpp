#include<bits/stdc++.h>
using namespace std;
vector<string> codes;
int main(){
    int n;
    cin>>n;
    codes.push_back("0");
    codes.push_back("1");
    for(int i=2;i<=n;i++){
        for(int j=codes.size()-1;j>=0;j--)
        codes.push_back(codes[j]);
        for(int j=0;j<codes.size()/2;j++)
        codes[j]="0"+codes[j];
        for(int j=codes.size()/2;j<codes.size();j++)
        codes[j]="1"+codes[j];
    }
    for(int i=0;i<codes.size();i++){
        cout<<codes[i]<<endl;
    }
}