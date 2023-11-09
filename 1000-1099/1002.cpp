#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1e9+7

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,n,m;
    cin>>n>>m>>a>>b;
    n++;
    m++;
    int step[25][25];
    for(int i=0;i<25;i++){
        for(int j=0;j<25;j++){
            step[i][j]=0;
        }
    }

    for(int i=1;i<25;i++){
        for(int j=1;j<25;j++){
            step[i][j]=-1;
        }
    }

    a++;
    b++;

	step[a][b]=0;
	step[a-2][b-1]=0;
	step[a-2][b+1]=0;
	step[a+2][b-1]=0;
	step[a+2][b+1]=0;
	step[a-1][b+2]=0;
	step[a-1][b-2]=0;
	step[a+1][b+2]=0;
	step[a+1][b-2]=0;
    step[1][1]=1;


    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(step[i][j]==-1){
                step[i][j]=step[i-1][j]+step[i][j-1];
            }
        }
    }
    cout<<step[n][m];
}
