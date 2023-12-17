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
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[maxn];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int pre[maxn];
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    int m;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<endl;
    }
}
