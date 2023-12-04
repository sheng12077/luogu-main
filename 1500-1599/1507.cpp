#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 505
#define mod 1000000007
#define mem(x) memset(x,0,sizeof(x))

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int h,t;
    cin>>h>>t;
    int n;
    cin>>n;
    int volume[maxn];
    int mass[maxn];
    int cal[maxn];
    for(int i=0;i<n;i++){
        cin>>volume[i]>>mass[i]>>cal[i];
    }
    int dp[maxn][maxn]={0};
    for(int i=0;i<n;i++){
        for(int j=h;j>=0;j--){
            for(int k=t;k>=0;k--){
                if(j>=volume[i] and k>=mass[i]){
                    dp[j][k]=max(dp[j][k],dp[j-volume[i]][k-mass[i]]+cal[i]);
                }
            }
        }
    }
    cout<<dp[h][t];
}
