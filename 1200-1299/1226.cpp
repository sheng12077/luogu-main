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

    int a,b,p;
    int ans=1;
    cin>>a>>b>>p;    
    int outA=a;
    int outB=b;
    while(b>0){
        if(b&1){
            ans=ans*a%p;
        }
        a=a*a%p;
        b>>=1;
    }
    cout<<outA<<'^'<<outB<<" mod "<<p<<'='<<ans;
}
