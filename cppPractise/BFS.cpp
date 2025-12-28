#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> bfs(vector<bool> &visited, vector<int> adj[], int src)
{
    vector<int> res;
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        res.push_back(node);
        for (int it : adj[node])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
    }
    return res;
}
void edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v = 8;
    vector<int> adj[v];
    edge(adj, 0, 1);
    edge(adj, 0, 2);
    edge(adj, 1, 2);
    edge(adj, 2, 3);
    edge(adj, 3, 7);
    vector<bool> visited(v, false);
    vector<int> res = bfs(visited, adj, 0);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}