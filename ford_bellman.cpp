#include<bits/stdc++.h>
using namespace std;

//edge class
class Edge{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main(){
    int n, m;
    cin>>n>>m;
    int dist[n+1];
    vector<Edge>v;
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        Edge ed(a,b,w);
        v.push_back(ed);
    }

    //all nodes infinity
    for(int i=1; i<=n; i++){
       dist[i]=INT_MAX;
    }

    //source node is zero
    dist[1]=0;

    //bellmen ford implementation
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<v.size(); j++){
            Edge ed=v[j];
            int u=ed.u;
            int v=ed.v;
            int w=ed.w;
            if(dist[u]!=INT_MAX&&dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
            }
        }
    }

    //print
    for(int i=1; i<=n; i++){
        if(dist[i]==INT_MAX){
             cout<<"30000"<<" ";
        }
        else{
              cout<<dist[i]<<" ";
        }
      
      
    }
    return 0;
}