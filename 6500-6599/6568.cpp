#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 1000005
#define mod 1000000007
#define mem(x) memset(x,0,sizeof(x))

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n,k;
    cin>>n;
    cin>>k;
    int pre[maxn];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        pre[i]=pre[i-1]+a;
    }
    int ans=-1e9;
    for(int i=1;i<=n-k;i++){
        ans=max(ans,pre[i+k]-pre[i-1]);
    }
    cout<<ans;
}
