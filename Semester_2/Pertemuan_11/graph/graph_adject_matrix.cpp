#include <iostream>
#include <vector>
using namespace std;

class Graph {
	private:
	    int numVertices;
	    vector<vector<int> > adjMatrix;
	    bool isDirected;
	
	public:
	    // Initialize matrix with 0 (no edges)
	    Graph(int vertices, bool directed = false) {                        // awal deklarasi semua kotak di isi dengan 0
	        numVertices = vertices;
	        isDirected = directed;
	        adjMatrix.resize(vertices, vector<int>(vertices, 0));
	    }
	
	    // Add an edge between vertex u and v
	    void addEdge(int u, int v, int weight = 1) {
	        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {   //validasi agar nilai tidak melewati batas
	            adjMatrix[u][v] = weight;                                   //parameter u dan v dimasukan dari weight -> karena tidak memasukan weight jadi defaultnya adalah 1 
	            if (!isDirected) {
	                adjMatrix[v][u] = weight; 
	            }
	        }
	    }
	
	    // Remove an edge
	    void removeEdge(int u, int v) {
	        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
	            adjMatrix[u][v] = 0;
	            if (!isDirected) {
	                adjMatrix[v][u] = 0;
	            }
	        }
	    }
	
	    // Print the matrix layout
	    void display() {
	        for (int i = 0; i < numVertices; i++) {
	            for (int j = 0; j < numVertices; j++) {
	                cout << adjMatrix[i][j] << " ";
	            }
	            cout << "\n";
	        }
	    }
};

int main() {
    // Create an undirected graph with 4 vertices (0 to 3)
    Graph g(4, false);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    // g.removeEdge(1, 2);

    cout << "Adjacency Matrix:\n";
    g.display();

    return 0;
}