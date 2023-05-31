#include <iostream> 
using namespace std;
class Graph
{
int v; int **g;
public:
Graph(int v)
{
this->v = v;
g = new int *[v];
for (int i = 0; i < v; i++) g[i] = new int[v];
}
void addEdge(int u, int v)
{
g[u][v] = 1;
g[v][u] = 1;
}
void BFS(int s)
{
int q[v], f = -1, r = -1; bool visited[v] = {0}; visited[s] = 1;
f++; r++;
q[r] = s; while (f <= r)
{
s = q[f];
cout << s << " "; f++;
for (int i = 0; i < v; i++)
{
if (g[s][i] == 1 && visited[i] != 1)
{
visited[i] = 1; r++;
q[r] = i;
}
}
}}
void DFS(int s, bool visited[])
{
visited[s] = 1; cout << s << " ";
for (int i = 0; i < v; i++)
{
if (g[s][i] == 1 && visited[i] != 1)
{
DFS(i, visited);
}
}
}
};
int main()
{
int v, e;
cout << "Enter Number of Vertices : "; cin >> v;
cout << "Enter Number of Edges : "; cin >> e;
Graph G(v);
cout << "Enter Edge(s) : "; for (int i = 0; i < e; i++)
{
int u, v;
cin >> u >> v; G.addEdge(u, v);
}
int s;
cout << "BFS Source : "; cin >> s;
G.BFS(s);
cout << endl;
cout << "DFS Source : "; cin >> s;
bool visited[v] = {0}; G.DFS(s, visited); cout << endl;
return 0;
}
