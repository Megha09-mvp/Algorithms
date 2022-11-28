#include <iostream>
#include <algorithm>
using namespace std;
const int V = 10;
int min_key(bool mst[V], int key[V]){
int min = INT_MAX, min_index;
for(int i = 0; i < V; i++){
if(mst[i]==false && key[i] < min)
min_index = i, min = key[i];
}
return min_index;
}
void printMST(int par[V], int graph[V][V]){
cout<<"Edge \tWeight\n";
for (int i = 1; i < V; i++)
cout<<par[i]<<" - "<<i<<" \t"<<graph[i][par[i]]<<" \n";
}
void minPrim(int graph[V][V]){
bool mst[V];
int par[V];
int key[V];
for(int i = 0; i<V; i++)
key[i] = INT_MAX, mst[i] = false;
key[0] = 0;
par[0] = -1;
for(int i = 0; i < V-1; i++){
int u = min_key(mst, key);
mst[u] = true;
for(int v = 0; v < V; v++)
if(mst[v] == false && graph[u][v] && graph[u][v] < key[v])
par[v] = u, key[v] = graph[u][v];
}
printMST(par, graph);
}
int main() {
int graph[V][V] = {
{0, 15, 10, 19, 0, 0, 0, 0, 0, 0},
{15, 0, 0, 7, 17, 0, 0, 0, 0, 0},
{10, 0, 0, 16, 0, 14, 0, 0, 0, 0},
{19, 7, 16, 0, 12, 6, 3, 0, 0, 0},
{0, 17, 0, 12, 0, 0, 20, 13, 0, 0},
{0, 0, 14, 6, 0, 0, 9, 0, 5, 0},
{0, 0, 0, 3, 20, 9, 0, 4, 1, 11},
{0, 0, 0, 0, 13, 0, 4, 0, 0, 2},
{0, 0, 0, 0, 0, 5, 1, 0, 0, 18},
{0, 0, 0, 0, 0, 0, 11, 2, 18, 0}
};
minPrim(graph);
return 0;
}