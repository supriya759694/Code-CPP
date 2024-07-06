#include <iostream>
using namespace std;

class graph {
private:
    int v_count;
    int e_count;
    int **adj;

public:
    int v_counting();
    int e_counting();
    void createGraph(int, int);
    void printgraph();
};

void graph::printgraph() {
    for (int i = 0; i < v_count; i++) {
        for (int j = 0; j < v_count; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int graph::v_counting() {
    return v_count;
}

int graph::e_counting() {
    return e_count;
}

void graph::createGraph(int n, int e) {
    v_count = n;
    e_count = e;
    adj = new int*[v_count];
    for (int i = 0; i < v_count; i++) {
        adj[i] = new int[v_count];
        for (int j = 0; j < v_count; j++) {
            adj[i][j] = 0;  // Initialize all elements to 0
        }
    }
    int u, v;
    for (int k = 0; k < e_count; k++) {  // Start loop from 0
        cout << "Enter node numbers connecting through edges:" << endl;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}

int main() {
    graph g;
    g.createGraph(3, 3);
    g.printgraph();
    return 0;
}

