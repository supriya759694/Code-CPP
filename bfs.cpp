/*#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Function to perform Breadth First Search on a graph
// represented using adjacency list
void bfs(vector<vector<int> >& adjList, int startNode,
		vector<bool>& visited)
{
	// Create a queue for BFS
	queue<int> q;

	// Mark the current node as visited and enqueue it
	visited[startNode] = true;
	q.push(startNode);

	// Iterate over the queue
	while (!q.empty()) {
		// Dequeue a vertex from queue and print it
		int currentNode = q.front();
		q.pop();
		cout << currentNode << " ";

		// Get all adjacent vertices of the dequeued vertex
		// currentNode If an adjacent has not been visited,
		// then mark it visited and enqueue it
		for (int neighbor : adjList[currentNode]) {
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				q.push(neighbor);
			}
		}
	}
}

// Function to add an edge to the graph
void addEdge(vector<vector<int> >& adjList, int u, int v)
{
	adjList[u].push_back(v);
}

int main()
{
	// Number of vertices in the graph
	int vertices = 5;

	// Adjacency list representation of the graph
	vector<vector<int> > adjList(vertices);

	// Add edges to the graph
	addEdge(adjList, 0, 1);
	addEdge(adjList, 0, 2);
	addEdge(adjList, 1, 3);
	addEdge(adjList, 1, 4);
	addEdge(adjList, 2, 4);

	// Mark all the vertices as not visited
	vector<bool> visited(vertices, false);

	// Perform BFS traversal starting from vertex 0
	cout << "Breadth First Traversal starting from vertex "
			"0: ";
	bfs(adjList, 0, visited);

	return 0;
}
*/

//2nd process of bfs

#include <iostream>
#include <vector>
#include <queue>
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

    void BFS(int start) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
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
    G.BFS(startNode); // Starting BFS from node 1

    return 0;
}

