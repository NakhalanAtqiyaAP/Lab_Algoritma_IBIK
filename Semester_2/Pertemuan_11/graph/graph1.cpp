// ! Vertex fungsinya untuk menambahkan koneksi antara graph
#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V; 
    bool is_directed;   //dua arah bulak balik(jika false)/satu arah(jika true)
    vector<vector<int> > adj; 

	public:
    //1. Membuat 5 vertex
    //2. Fungsi addEdge untuk menambahkan atau mengkoneksikan edge dengan vertex

	    Graph(int vertices, bool is__directed = false) {
	        V = vertices;
	        is_directed = is__directed;
	        adj.resize(V);
	    }
	
	    // Menambahkan hubungan antara vertex(hubungan antara ketertetanggan)
	    void addEdge(int u, int v) {
	        adj[u].push_back(v);
	        if (!is_directed) {
	        	adj[v].push_back(u);
			}
	    }
	
	    void printGraph() {
	        for (int i = 0; i < V; ++i) {
	            cout << "Vertex " << i << ":";
	            for (int j = 0; j < adj[i].size(); j++) {
	                cout << " -> " << adj[i][j];
	            }
	            cout << "\n";
	        }
	    }
};

int main() {
    // Membuat graph, disini vertexnya ada 5(dimulai dari 0 karena index)
    Graph g(5, false);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Print the final representation
    g.printGraph();

    return 0;
}