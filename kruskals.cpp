#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream> // For file operations

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Subset {
    int parent, rank;
};

class Graph {
private:
    int V;
    vector<Edge> edges;

    int find(vector<Subset>& subsets, int i) {
        if (subsets[i].parent != i)
            subsets[i].parent = find(subsets, subsets[i].parent);
        return subsets[i].parent;
    }

    void Union(vector<Subset>& subsets, int x, int y) {
        int xroot = find(subsets, x);
        int yroot = find(subsets, y);

        if (subsets[xroot].rank < subsets[yroot].rank)
            subsets[xroot].parent = yroot;
        else if (subsets[xroot].rank > subsets[yroot].rank)
            subsets[yroot].parent = xroot;
        else {
            subsets[yroot].parent = xroot;
            subsets[xroot].rank++;
        }
    }

public:
    Graph(int vertices) : V(vertices) {}

    void addEdge(int src, int dest, int weight) {
        Edge edge;
        edge.src = src;
        edge.dest = dest;
        edge.weight = weight;
        edges.push_back(edge);
    }

    void KruskalMST() {
        vector<Edge> result(V - 1);
        sort(edges.begin(), edges.end(), [](const Edge &a, const Edge &b) {
            return a.weight < b.weight;
        });

        vector<Subset> subsets(V);
        for (int v = 0; v < V; ++v) {
            subsets[v].parent = v;
            subsets[v].rank = 0;
        }

        int e = 0, i = 0;
        while (e < V - 1 && i < edges.size()) {
            Edge next_edge = edges[i++];
            int x = find(subsets, next_edge.src);
            int y = find(subsets, next_edge.dest);

            if (x != y) {
                result[e++] = next_edge;
                Union(subsets, x, y);
            }
        }

        // Output DOT format for Graphviz
        ofstream out("mst_graph.dot");
        out << "graph MST {" << endl;
        for (i = 0; i < e; ++i) {
            out << "\t" << result[i].src << " -- " << result[i].dest << "  [label=\"" << result[i].weight << "\"];" << endl;
        }
        out << "}" << endl;
        out.close();

        // Inform the user
        cout << "MST graph DOT file created: mst_graph.dot" << endl;
    }
};

int main() {
    int V = 4; // Number of vertices
    Graph graph(V);

    // Adding edges to the graph
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    // Finding MST using Kruskal's algorithm and creating MST graph DOT file
    graph.KruskalMST();

    return 0;
}
