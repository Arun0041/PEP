#include <bits/stdc++.h>
#include <list>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of vertices and edges: ";
    cin>>m>>n;
    unordered_map<int,list<int>> adj;
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(auto& x : adj){
        cout<<x.first<<"->";
        for(auto& y : x.second){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}