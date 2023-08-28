#include<bits/stdc++.h>
using namespace std;
const int INF=100;
int main(){
    int n;
    cin>>n;
    int dist[n+1][n+1];
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            if(i==j) dist[i][j]=0;
            else dist[i][j]=INF;
        }
        cout<<endl;
    }

    //input
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int w;
            cin>>w;
            dist[i][j]=w;
        }
    }
    
    //floyd warshall implementation
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(dist[i][j]>dist[i][k]+dist[k][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
   
   //print
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}