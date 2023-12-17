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
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    int arr[maxn];
    int prefix[maxn];

    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int sum=prefix[n-1];
    int m=0;
    for(int i=0;i<n-k;i++){
        m=max(m,prefix[i+k]-prefix[i]);
    }
    cout<<sum-m;
}
