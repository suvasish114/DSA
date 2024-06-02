#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool search(vector<int> arr, int a){
    for(auto b: arr){
        if(a==b) return true;
    }
    return false;
}

vector<int> DFS_traversal(vector<vector<int>> Gptr, int V){
    stack<int> OPEN;    // hold the vertices which is initialy empty
    vector<int> VISIT;  // store the visited vertices   
    int u = V;      // V = starting vertex 
    OPEN.push(u);
    while(OPEN.empty() != false){
        u = OPEN.top();
        OPEN.pop();
        search(VISIT, u);
        for(int i=0; i<Gptr.size(); i++){
            if(Gptr[u][i] == 1)
                OPEN.push(i);
        }
    }
    return VISIT;
}

vector<int> BFS_traversal(vector<vector<int>> Gptr, int V){
    
}

int main(int argc, char const *argv[]){
    vector<vector<int>> g = {{0,1,1,1}, {1,0,1,1}, {1,1,0,1}, {1,1,1,0}};   // declearing undirected graph
    vector<int> res = DFS_traversal(g, 1);
    return 0;
}
