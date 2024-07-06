
// C++ program to print DFS traversal from
// a given vertex in a given graph
#include <bits/stdc++.h>
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;

	// Function to add an edge to graph
	void addEdge(int v, int w);

	// DFS traversal of the vertices
	// reachable from v
	void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
	// Add w to v’s list.
	adj[v].push_back(w);
}

void Graph::DFS(int v)
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

// Driver code
int main()
{
	// Create a graph given in the above diagram
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";

	// Function call
	g.DFS(2);

	return 0;
}

// dfs
/*
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Graph {
private:
    unordered_map<int, vector<int>> adjList;
    unordered_map<int, bool> visited;

public:
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void DFS(int start) {
        stack<int> stk;
        stk.push(start);
        visited[start] = true;

        while (!stk.empty()) {
            int node = stk.top();
            stk.pop();
            cout << node << " ";

            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    stk.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }

    void initializeVisited() {
        for (auto &it : adjList) {
            visited[it.first] = false;
        }
    }
};

int main() {
    Graph G;
    G.addEdge(1, 2);
    G.addEdge(1, 3);
    G.addEdge(2, 4);
    G.addEdge(2, 5);
    G.addEdge(3, 6);

    int startNode = 1;
    G.initializeVisited();
    G.DFS(startNode); // Starting DFS from node 1

    return 0;
}
*/
