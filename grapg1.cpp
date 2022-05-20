#include <bits/stdc++.h>
using namespace std ; 

int main(){

    int nodes , edges ;
    vector <int> adj [nodes+1] ; 
    for(int i=0 ; i<edges ; i++){
        int u , v ; 
        cin>>u>>v ; 
       
        adj[u].push_back(v) ; 
         adj[v].push_back(u) ; 



    } 
    return 0 ; 
}