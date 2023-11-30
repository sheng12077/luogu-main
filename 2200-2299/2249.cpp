#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 1000005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int arr[maxn];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    while(m--){
        int q;
        cin>>q;
        int l=1,r=n;
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]>=q){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        if(arr[l]!=q){
            ans.push_back(-1);
        }
        else{
            ans.push_back(l);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
