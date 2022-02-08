#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define PI 3.141592653589793238
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
bool f[105];
int n;
ll c[20][20],x[100],A[100],s=0,Minn=1e9,cmin=1e9;
string num;

void init()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>c[i][j];
			if(c[i][j]!=0) cmin=min(cmin,c[i][j]);
		}
	}
}
void Quaylui(int i,string res)
{
	if(s+cmin*(n-i+1)>=Minn) return;
	for(int j=1;j<=n;j++)
	{
		if(f[j])
		{
			x[i]=j;
			f[j]=false;
			s+=c[x[i-1]][j];
			if(i==n)
			{
				if(s+c[x[n]][x[1]]<Minn)
				{
                   Minn=s+c[x[n]][x[1]];
                   for(int l = 1;l <= n; l++) A[l] = x[l];
				}
			}
			else Quaylui(i+1,res);
			s-=c[x[i-1]][j];
			f[j]=true;
		}
	}
}
int main()
{
        faster();
        
        for(int i=0;i<=105;i++) f[i]=true;
        f[1]=false;x[1]=1;
        init();
        if(n==1)
        {
        	cout<<"0";return 0;
		}
        Quaylui(2,"");
        cout<<Minn<<endl;
		for(int i = 1; i <= n ;i++) cout << A[i] <<" ";
		cout << "1";
    return 0;
}