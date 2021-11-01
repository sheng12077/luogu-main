#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

int weight[10005];    //time limit，時間限制，把這當背包容量
int value[10005];
int dp[10000005]; 

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,m;
    cin>>t>>m; 
    for(int i=0;i<m;i++){
        cin>>weight[i]>>value[i];
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<=t;j++){
            if(j-weight[i]>=0){
                dp[j]=max(dp[j],dp[j-weight[i]]+value[i]);
            }
        }
    }
    cout<<dp[t]<<endl;
}
