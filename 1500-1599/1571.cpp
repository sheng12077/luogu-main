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

    int n,m;
    cin>>n>>m;
    int a[maxn];
    int b[maxn];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b,b+m);
    for(int i=0;i<n;i++){
        int left=0;
        int right=m;
        while(left<right){
            int mid=(left+right)/2;
            if(b[mid]==a[i]){
                cout<<a[i]<<" ";
                break;
            }
            else if(b[mid]>a[i]){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
    }
}
