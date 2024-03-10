#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;



class graph{
    public:
    
    unordered_map<int,list<pair<int,int>>> adj;


    void addEdge(int u,int v,int w){
        //create adjacent list
        pair<int,int>p=make_pair(v,w);
        adj[u].push_back(p);
    }

    void printadj(){
        for(auto a:adj){
            cout<<a.first<<"->";
            for(auto b:a.second){
                cout<<"("<<b.first<<","<<b.second<<"),";

            }
            cout<<endl;
        }
    }
    void dfs(unordered_map<int,bool>&visited,int node,stack<int>&topo){
        visited[node]=true;
        for(auto a:adj[node]){
            if(!visited[a.first]){
                dfs(visited,a.first,topo);
            }
        }
        topo.push(node);
        
    }

    void shortestpath(int src,stack<int>& topo,vector<int>& dist){
       
       dist[src]=0;
        while(!topo.empty()){
            int top=topo.top();
            
            topo.pop();
            if(top!=333){
                cout<<top<<endl;
                for(auto a:adj[top]){
                    if(dist[a.first]>dist[top]+a.second){
                        dist[a.first]=dist[top]+a.second;
                        
                    }
                }
            }
        }
    }

};
int main(){
    graph G;
    G.addEdge(1, 3, 6);
    G.addEdge(1, 2, 2);
    G.addEdge(0, 1, 5);
    G.addEdge(0, 2, 3);
    G.addEdge(3, 4, -1);
    G.addEdge(2, 4, 4);
    G.addEdge(2, 5, 2);
    G.addEdge(2, 3, 7);
    G.addEdge(4, 5, -2);
    G.printadj();
    
    unordered_map<int,bool>visited;
    stack<int>topo;
    int n=6;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            G.dfs(visited,i,topo);
        }
    }
    int src=1;
  vector<int> dist(n);
  for(int i=0;i<dist.size();i++){
    dist[i]=333;
  }
    
    G.shortestpath(src,topo,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<",";
    }
return 0;
}