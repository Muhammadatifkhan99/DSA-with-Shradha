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

       void dfs(int i,int j,vector<vector<bool>> &vis, vector<vector<char>> &grid,int n,int m){
        if(i<0 || j<0 || i>= n || j>= m || vis[i][j] || grid[i][j] != '1') return;
        vis[i][j] = true;

        dfs(i-1,j,vis,grid,n,m); //top
        dfs(i,j+1,vis,grid,n,m);
        dfs(i+1,j,vis,grid,n,m);
        dfs(i,j-1,vis,grid,n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n,vector<bool>(m,false));

        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(i,j,vis,grid,n,m);
                    islands++;
                }
            }
        }
        return islands;
    }

    //flood fill algorithm

        void dfs(vector<vector<int>>&image,int i,int j,int newColor,int orgColor){
        int n = image.size();
        int m = image[0].size();
        if(i<0||j<0||i>=n||j>=m||image[i][j]==newColor||image[i][j]!=orgColor) return;

        image[i][j] = newColor;
        dfs(image,i-1,j,newColor,orgColor);
        dfs(image,i,j+1,newColor,orgColor);
        dfs(image,i+1,j,newColor,orgColor);
        dfs(image,i,j-1,newColor,orgColor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color,image[sr][sc]);

        return image;
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