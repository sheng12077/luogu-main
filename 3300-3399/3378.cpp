#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10005
#define mod 100003


priority_queue<int,vector<int>,greater<int>>pq;

void op1(int k){
    pq.push(k);
}

void op2(){
    cout<<pq.top()<<endl;
}

void op3(){
    pq.pop();
}


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int o;
        cin>>o;
        if(o==1){
            int x;
            cin>>x;
            op1(x);
        }
        else if(o==2){
            op2();
        }
        else{
            op3();
        }
    }
}
