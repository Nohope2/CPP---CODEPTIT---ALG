#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
int main()
{
  faster();
    int t;
	cin>>t;
	while(t--)
    {
		int n,s=0;
		cin>>n;
		vector <char> a(15),b(15,'A'),c(15,'A');
		b[1]=b[2]=b[8]=b[13]='B';
		b[5]=b[6]=b[10]=b[11]='C';
		b[4]=b[9]=b[14]='D';
		c[4]=c[8]=c[9]=c[13]=c[14]='B';
		c[1]=c[2]=c[5]=c[10]='C';
		c[6]=c[7]=c[11]=c[12]='D';
		f0(i,15) cin>>a[i];
		if(n==101){
			f0(i,15) if(a[i]==b[i]) s++;
			printf("%.2f\n",(float)10*s/15);
		}
		else{
			f0(i,15) if(a[i]==c[i]) s++;
			printf("%.2f\n",(float)10*s/15);
		}
	}
  return 0;
}