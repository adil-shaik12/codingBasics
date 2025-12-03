#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> unDirectedList(int v, vector<vector<int>> &edges)
{
    vector<vector<int>> list(v);
    for (auto &it : edges)
    {
        int u = it[0];
        int v = it[1];
        list[u].push_back(v);
        list[v].push_back(u);
    }
    return list;
}
int main()
{
    int v = 3;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}};
    vector<vector<int>> list = unDirectedList(v, edges);
    for (int i = 0; i < v; i++)
    {
        cout << i << ":";
        for (int j : list[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}