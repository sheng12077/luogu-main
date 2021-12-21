
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007

vector<pair<int,int>>graph[maxn];
int dis[maxn];
bool visited[maxn]={false};
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        graph[a].push_back({b,w});
        graph[b].push_back({a,w});
    }
    memset(dis,0x3f,sizeof(dis));
    
    dis[1]=0;

    pq.push({0,1});
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
            if(visited[u]){
                continue;
            }
            if(dis[u]>k){
                dis[u]=k;
                pq.push({dis[u],u});
            }
        }
    }
    int max_length=0;
    for(int i=1;i<=n;i++){
        if(max_length<dis[i]){
            max_length=dis[i];
        }
    }
    cout<<n-1<<" "<<max_length;
}
