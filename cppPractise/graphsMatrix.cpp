// for undirected graph
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> unDirectedGraph(int v, vector<vector<int>> &edges)
{
    vector<vector<int>> mat(v, vector<int>(v, 0));
    for (auto &it : edges)
    {
        int u = it[0];
        int v = it[1];
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    return mat;
}
// for directed graph
vector<vector<int>> directedGraph(int v, vector<vector<int>> &edges)
{
    vector<vector<int>> mat1(v, vector<int>(v, 0));
    for (auto &it : edges)
    {
        int u = it[0];
        int v = it[1];
        mat1[u][v] = 1;
    }
    return mat1;
}
int main()
{
    int v = 3;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}};
    vector<vector<int>> mat = unDirectedGraph(v, edges);
    cout << "for undirected graph:" << "\n";
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    vector<vector<int>> mat1 = directedGraph(v, edges);
    cout << "for directed graph:" << "\n";
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}