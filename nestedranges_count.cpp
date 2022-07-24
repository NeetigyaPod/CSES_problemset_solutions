#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
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
    int contained[n]={0},contains[n]={0};
    oset<pair<int,int>> greater;
    int max_R=0;
    for(int i=0;i<n;i++)
    {
        
        // if(ranges[i].second>max_R)
        // max_R=ranges[i].second;
        // else
        // {
            // cout<<positions[ranges[i]]<<endl;
            contained[positions[ranges[i]]]=i-greater.order_of_key({ranges[i].second,-1});
        // }
        greater.insert({ranges[i].second,i});
    }
    long long min_R=1e9+1;
    oset<pair<int,int>> lesser;
    for(int i=n-1;i>=0;i--)
    {
        
        // if(ranges[i].second<min_R)
        // min_R=ranges[i].second;
        // else
        // {
            contains[positions[ranges[i]]]=lesser.order_of_key({ranges[i].second+1,-1});
        // }
        lesser.insert({ranges[i].second,i});
    }
    for(int i=0;i<n;i++)
    cout<<contains[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<contained[i]<<" ";
    cout<<endl;
}