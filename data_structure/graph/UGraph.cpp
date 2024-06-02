#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class UGraph{
private:
    vector<vector<int>> UGptr; // pointer to the graph
    int N;  // number of vertices present in the graph
public:
    // default constractor
    UGraph(){}

    // parameterised constractor
    UGraph(vector<pair<int, int>> edges, int n){
        N = n;
        vector<int> temp(N, 0);
        for(int i=0; i<N; i++) UGptr.push_back(temp);   // initializing all vertices with 0
        for(auto a: edges){     // adding edges to the graph
            UGptr[a.first-1][a.second-1] = 1;
            UGptr[a.second-1][a.first-1] = 1;
        }
    }

    // function to add vertex
    void addVertex(vector<int> adj){
        N = N+1;
        vector<int> temp(N, 0);
        for(int i=0; i<N; i++){
            UGptr[i].push_back(0);
        }
        UGptr.push_back(temp);
        for(int i=0; i<adj.size(); i++){
            UGptr[adj[i]-1][N-1] = 1;
            UGptr[N-1][adj[i]-1] = 1;
        }
    }

    // function to add edge
    void addEdge(vector<pair<int, int>> vertices){
        for(int i=0; i<vertices.size(); i++){
            UGptr[vertices[i].first-1][vertices[i].second-1] = 1;
            UGptr[vertices[i].second-1][vertices[i].first-1] = 1;
        }
    }

    // display the matrix
    void displayGraph(){
        for(auto a: UGptr){
            for(auto b: a){
                cout<<b<<" ";
            }
            cout<<endl;
        }
    }

    // destractor
    ~UGraph(){}
};

int main(int argc, char const *argv[]){
    UGraph g({{1,2}, {1,3}, {2,3}}, 3); // initializing graph using parameters
    g.displayGraph();
    cout<<"----------------------"<<endl;
    g.addVertex({2,3}); // adding new vertices
    g.displayGraph();
    cout<<"----------------------"<<endl;
    g.addEdge({{1,4}}); // adding new edge
    g.displayGraph();
    cout<<"----------------------"<<endl;
    return 0;
}
