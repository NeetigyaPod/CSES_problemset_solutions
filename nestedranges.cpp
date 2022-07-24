#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first ||(a.first==b.first)&& (a.second>b.second);
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >ranges;
    map<pair<int,int>,int> positions;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        ranges.push_back(make_pair(a,b));
        positions[make_pair(a,b)]=i;
    }
    
    sort(ranges.begin(),ranges.end(),comp);
    // for(int i=0;i<n;i++){
    // cout<<ranges[i].first<<ranges[i].second<<positions[ranges[i]]<<endl;
        
    // }
    int contained[n]={0},contains[n]={0};
    int max_R=0;
    for(int i=0;i<n;i++)
    {
        
        if(ranges[i].second>max_R)
        max_R=ranges[i].second;
        else
        {
            // cout<<positions[ranges[i]]<<endl;
            contained[positions[ranges[i]]]=1;
        }
    }
    long long min_R=1e9+1;
    for(int i=n-1;i>=0;i--)
    {
        
        if(ranges[i].second<min_R)
        min_R=ranges[i].second;
        else
        {
            contains[positions[ranges[i]]]=1;
        }
    }
    for(int i=0;i<n;i++)
    cout<<contains[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<contained[i]<<" ";
    cout<<endl;
}