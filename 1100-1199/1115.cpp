#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 200005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int dp[maxn];
    int arr[maxn];
    int max_value=-2147483647;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=max(arr[i],arr[i]+dp[i-1]);
        max_value=max(max_value,dp[i]);
    }
    cout<<max_value;
}
