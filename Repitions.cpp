#include<bits/stdc++.h>
using namespace std;
int main(){
    string dna;
    cin>>dna;
    long long size=1,temp=1;
    for(int i=1;i<dna.size();i++){
        if(dna[i]==dna[i-1])
        temp++;
        else{
            size=max(size,temp);
            temp=1;
        }
    }
    size=max(size,temp);
    cout<<size;
}