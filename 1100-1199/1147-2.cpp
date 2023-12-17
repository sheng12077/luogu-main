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
    cin>>m;;
    int sum=0;

    int l=1;
    for(int r=1;r<m;r++){
        sum+=r;
        while(sum>m){
            sum-=l;
            l++;
        }
        if(sum==m){
            cout<<l<<" "<<r<<endl;
        }
    }
}
