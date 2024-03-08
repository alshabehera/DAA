#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adjList;
    void inserttt(int u,int v,bool direction){
        //direction=0 ->undirected
        //direction=1 ->directed
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }

    void printList(){
        for(auto i:adjList){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
   
    int n;int m;
    cout<<" no of edges";
    cin>>n;
    cout<<"enter no. of nodes";
    cin>>m;
     graph g;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        g.inserttt(u,v,0);
    }
    g.printList();


}