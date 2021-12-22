#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007

int parent[maxn]={0};

void initialise(int n){
    for (int i=0;i<n;i++){
        parent[i]=i;
    }
}

int find(int x){
    if (parent[x]==x){
        return x;
    }
    else{
        return parent[x]=find(parent[x]);
    }
}

void merge (int x,int y){
    int x_root=find(x);
    int y_root=find(y);
    parent[x_root]=y_root;   
}


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,p;
    cin>>n>>m>>p;
    initialise(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        merge(a,b);
    }
    for(int i=0;i<p;i++){
        int a,b;
        cin>>a>>b;
        if(find(a)==find(b)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
