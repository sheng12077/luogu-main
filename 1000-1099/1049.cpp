#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    int dp[maxn];
    int weight[maxn];
    for(int i=1;i<=m;i++){
        cin>>weight[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=n;j>0;j--){
            if(j-weight[i]>=0){
                dp[j]=max(dp[j],dp[j-weight[i]]+weight[i]);
            }
        }
    }
    cout<<n-dp[n];
}
