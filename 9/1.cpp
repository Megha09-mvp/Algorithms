#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
using node = tuple<int,int,int>;
vector<node> edges;
int n,m;
cout<<"Enter number of vertices and edges: ";
cin>>n>>m;
for(int i=0;i<m;i++)
{
int src,dst,weight;
cin>>src>>dst>>weight;
edges.push_back({src,dst,weight});
}
vector<int> d(n+1,1000000);
//source vertex
d[1]=0;
for(int i=0;i<=n-1;i++)
{
for(auto e:edges)
{
int u,v,w;
tie(u,v,w) = e;
if(d[v]>d[u]+w)
{
d[v] = d[u]+w;
}
}
}
cout<<"All Shortest Path Weights:\n";
for(int i=1;i<=n;i++)
{
cout<<d[i]<<' ';
}
return 0;
}