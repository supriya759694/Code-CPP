
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(const vector<int>& a, const vector<int>& b) {
    return a[2] < b[2];
}

void makeSet(vector<int>& parent, vector<int>& rank, int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int>& parent, int node) {
    if (parent[node] == node)
        return node;
    return parent[node] = findParent(parent, parent[node]);
}

void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (rank[u] < rank[v])
        parent[u] = v;
    else if (rank[v] < rank[u])
        parent[v] = u;
    else {
        parent[v] = u;
        rank[u]++;
    }
}

int minimumSpanningTree(vector<vector<int>>& edges, int n, vector<vector<int>>& mstEdges) {
    sort(edges.begin(), edges.end(), com);
    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent, rank, n);

    int minWeight = 0;
    for (int i = 0; i < edges.size(); i++) {
        int u = findParent(parent, edges[i][0]);
        int v = findParent(parent, edges[i][1]);
        int wt = edges[i][2];
        if (u != v) {
            minWeight += wt;
            unionSet(u, v, parent, rank);
            mstEdges.push_back(edges[i]);  // Add edge to MST
        }
    }
    return minWeight;
}

void generateDOTFile(const vector<vector<int>>& edges, const vector<vector<int>>& mstEdges) {
    ofstream dotFile("graph.dot");
    dotFile << "graph G {\n";

    // Add all edges
    for (const auto& edge : edges) {
        dotFile << edge[0] << " -- " << edge[1] << " [label=\"" << edge[2] << "\"];\n";
    }

    dotFile << "\n";

    // Highlight edges in MST
    for (const auto& edge : mstEdges) {
        dotFile << edge[0] << " -- " << edge[1] << " [color=red, label=\"" << edge[2] << "\"];\n";
    }

    dotFile << "}\n";
    dotFile.close();
}

int main() {
    vector<vector<int>> edges = {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}};
    vector<vector<int>> mstEdges;
    int n = 4;
    int minWeight = minimumSpanningTree(edges, n, mstEdges);

    cout << "Minimum Spanning Tree Weight: " << minWeight << endl;

    generateDOTFile(edges, mstEdges);

    cout << "DOT file generated: graph.dot" << endl;

    return 0;
}
