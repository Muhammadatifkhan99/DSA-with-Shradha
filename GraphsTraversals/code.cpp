#include<iostream>
#include<vector>
#include<queue>
#include<list>

using namespace std;

class Graph {
    int V;
    list<int> *l; // int *arr, we need list of int at every index.

public: 
    Graph(int V){
        this->V = V;
        //arr = new int[V];
        l = new list<int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList(){
        for(int i{0};i<V;i++){
            cout <<i<<":";
            for(int neigh: l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    void bfs(){
        queue<int> Q;
        Q.push(0); //source node is zero always
        vector<bool>  vis(V,false);

        vis[0] = true;

        while(Q.size()>0){
            int u = Q.front();
            Q.pop();
            cout << u << " ";
            for(auto it: l[u]){
                if(!vis[it]){
                    vis[it] = true;
                    Q.push(it);
                }
            }
        }
        cout << endl;
    }

    void dfsHelper(int u, vector<bool> &vis){
        cout << u << " ";
        vis[u] = true;

        for(int v: l[u]){
            if(!vis[v]){
                dfsHelper(v,vis);
            }
        }
    }

    void dfs(){
        vector<bool> vis(V,false);
        int source = 0;
        dfsHelper(source,vis);
    }

};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    // g.addEdge(2,4);


    // cout << "This is the adjacency list given below " << endl;
    // g.printAdjList();
    cout << "BFS Traversal: " << endl;
    g.bfs();

    cout << "DFS Traversal: " << endl;
    g.dfs();


    return 0;
}