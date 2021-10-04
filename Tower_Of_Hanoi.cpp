#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> moves;
void helper(int n,int from,int to){
    if(n==1){
        moves.push_back(make_pair(from+1,to+1));
        return;
    }
    helper(n-1,from,3-from-to);
    moves.push_back(make_pair(from+1,to+1));
    helper(n-1,3-from-to,to);
}
int main(){
    int n;
    cin>>n;
    helper(n,0,2);
    cout<<(moves.size())<<endl;
    for(int i=0;i<moves.size();i++){
        cout<<moves[i].first<<" "<<moves[i].second<<endl;
    }
}