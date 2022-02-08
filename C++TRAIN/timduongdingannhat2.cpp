#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
int a[205][205],n;
vector< vector<int> > check;
// danh dau de ko di lai lan nua
vector<vector<int> > Try;
// luu vi tri da di toi tuc la buoc truoc do
// quy uoc di xuong thi try =0
// di sang thi try=1
string res;
void init()
{
   cin>>n;
   FOR(i,n)
   {
       FOR(j,n) cin>>a[i][j];
   }
   res="";
	check.resize(n+2, vector<int> (n+2, 0));
	Try.resize(n+2, vector<int> (n+2, 0));
}
void TruyVet(int x,int y)
{
    if(x==0&&y==0) return;
    if(Try[x][y]==1) // đang đi lên
	{
		res="D"+res;
		TruyVet(x-1,y);
	}
	else // đang đi xuống
	{
		res="R"+res;
		TruyVet(x,y-1);
	}
}
void BFS()
{
    queue<pair<int, int> > q;
    q.push(make_pair(0,0));
    Try[0][0]=1;
    while (!q.empty()) 
    {
        pair<int, int> p = q.front();
        int x=p.first; // lấy vị trí hàng ra
		int y=p.second;// lấy vị trí cột ra
        q.pop();
        if (x==n-1&&y==n-1)
        {
            TruyVet(x,y);
            cout<<res;
            return;
        }
        if (a[x+1][y]==1&&check[x+1][y]==0) // đi xuống ưu tiên trước
        {
            q.push(make_pair(x+1,y));
            check[x+1][y]=1;
			Try[x+1][y]=1; // lưu vết lại để tìm cách đi tối ưu nhất
        }
        if (a[x][y+1]==1&&check[x][y+1]==0) // đi sang ngang
        {
            q.push(make_pair(x,y+1));
            check[x][y+1]=1;
			Try[x][y+1]=0;// lưu vết sang ngang
        }
    }
    cout<<-1;
}
int main()
{
    faster();
   init();
   if(a[0][0]==0) cout<<-1;
   else BFS();
    return 0;
}