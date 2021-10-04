#include<bits/stdc++.h>
using namespace std;
set<string> combinations;
void comb(string s,string out){
    if(s.size()==0){
        if(combinations.count(out))
        return;
        combinations.insert(out);
    }
    for(int i=0;i<s.size();i++){
        comb(s.substr(0,i)+s.substr(i+1,s.size()),out+s[i]);
    }
}
int main(){
    string s;
    cin>>s;
    comb(s,"");
    cout<<combinations.size()<<endl;
    for( auto it=combinations.begin();it!=combinations.end();it++)
    {
        cout<<*it<<endl;
    }
}