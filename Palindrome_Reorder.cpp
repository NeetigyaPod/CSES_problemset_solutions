#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,output="";
    char oddpos;
    cin>>s;
    unordered_map<char,int> charfreq;
    for(int i=0;i<s.size();i++){
        charfreq[s[i]]++;
    }
    int odd=0;
    for(char ch='A';ch<='Z';ch++){
        if(charfreq[ch]%2&&odd){
            cout<<"NO SOLUTION";
            return 0;
        }
        if(charfreq[ch]%2){
            oddpos=ch;
            odd=1;
        }
            for(int i=0;i<charfreq[ch]/2;i++)
            output+=ch;
    }
    if(odd)
    output+=oddpos;
    string finalout=output;
    for(int i=0;i<output.size()-odd;i++){
        finalout+=output[output.size()-i-odd-1];
    }
    cout<<finalout;
}