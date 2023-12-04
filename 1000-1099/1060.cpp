#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007
#define mem(x) memset(x,0,sizeof(x))

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int weight[maxn];
    int level[maxn];
    int dp[maxn]={0};
    for(int i=0;i<m;i++){
        cin>>weight[i]>>level[i];
    }
    for(int i=0;i<m;i++){
        for(int j=n;j>=0;j--){
            if(j>=weight[i]){
                dp[j]=max(dp[j],dp[j-weight[i]]+weight[i]*level[i]);
            }
        }
    }
    cout<<dp[n];
}
