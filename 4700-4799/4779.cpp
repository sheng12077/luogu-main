//dijkstra model
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 100005

vector<pair<int,int>>graph[maxn];
int dis[maxn];
bool visited[maxn]={false};
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

int a,b,w;
int n,m,start;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>start;

    memset(dis,0x3F,sizeof(dis));
    dis[start]=0;
    
    for(int i=1;i<=m;i++){
        cin>>a>>b>>w;
        graph[a].push_back({b,w});
    }

    for(int i=1;i<=n;i++){
        pq.push({0,start});
        while(!pq.empty()){
            auto now=pq.top();
            pq.pop();
            int v=now.second;
            if(visited[v]){
                continue;                   
            }
            visited[v]=true;                   
            for(auto next:graph[v]){         
                int u=next.first;            
                int k=next.second;           
                if(dis[u]>dis[v]+k){
                    dis[u]=dis[v]+k;
                    pq.push({dis[u],u});
                }
            }
        }
        cout<<dis[i]<<" ";
    }
}
