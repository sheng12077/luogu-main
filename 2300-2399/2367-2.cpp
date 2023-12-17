#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 5000004
#define mod 1000000007
#define mem(x) memset(x,0,sizeof(x))

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,p;
    cin>>n>>p;

    int arr[maxn];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int d[maxn];
    for(int i=n;i>=0;i--){
        d[i]=arr[i]-arr[i-1];
    }

    while(p--){
        int l,r,x;
        cin>>l>>r>>x;
        d[l]+=x;
        d[r+1]-=x;
    }

    int ans=d[1];
    for(int i=1;i<=n;i++){
        arr[i]=arr[i-1]+d[i];
        ans=min(arr[i],ans);
    }
    cout<<ans;
}
