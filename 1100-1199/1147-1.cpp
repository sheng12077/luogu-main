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

    int m;
    cin>>m;
    int presum[maxn];
    map<int,int>exist;
    for(int i=1;i<=m;i++){
        presum[i]=presum[i-1]+i;
        exist[presum[i]]=i;
    }
    for(int i=0;i<m-1;i++){
        if(exist.count(presum[i]+m)){
            cout<<i+1<<" "<<exist[presum[i]+m]<<endl;
        }
    }
}
