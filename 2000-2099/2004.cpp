#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 1005
#define mod 1000000007
#define mem(x) memset(x,0,sizeof(x))

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n,m,c;
    cin>>n>>m>>c;
    int arr[maxn][maxn],pre[maxn][maxn];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+arr[i][j];
        }
    }
    int ans=-1e9;
    int x,y;
    for(int i=c;i<=n;i++){
        for(int j=c;j<=m;j++){
            if(ans<pre[i][j]-pre[i-c][j]-pre[i][j-c]+pre[i-c][j-c]){
                ans=pre[i][j]-pre[i-c][j]-pre[i][j-c]+pre[i-c][j-c];
                x=i-c+1;
                y=j-c+1;
            }
        }
    }
    cout<<x<<" "<<y;
}
