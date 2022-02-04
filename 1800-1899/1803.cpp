#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 100005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int,int>>vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        vec.push_back({end,start});
    }
    sort(vec.begin(),vec.end());
    int finish_time=vec[0].first;
    int cnt=1;
    for(auto a:vec){
        if(a.second>=finish_time){
            cnt++;
            finish_time=a.first;
        }
    }
    cout<<cnt;
}
