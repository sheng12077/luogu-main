#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,p;
    cin>>n>>p;
    vector<int>vec(n+2);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
    for(int i=n;i>=1;i--){
        vec[i]=vec[i]-vec[i-1];
    }
    while(p--){
        int l,r,v;
        cin>>l>>r>>v;
        vec[l]+=v;
        vec[r+1]-=v;
    }
    int ans=1e9;
    for(int i=1;i<=n;i++){
        vec[i]+=vec[i-1];
        ans=min(ans,vec[i]);
    }
    cout<<ans;
}
