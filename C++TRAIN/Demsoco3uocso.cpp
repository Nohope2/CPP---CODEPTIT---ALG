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
vector<int> a(1000005,0);
vector<long long> b;
void era()
{
	for(long long i=2;i<=1000001;i++)
    {
		if(a[i]==0)
        {
			for(long long j=i*i;j<=1000001;j+=i) a[j]=1;
			b.push_back(i);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	era();
	int t;
	cin>>t;
	while(t--){
		long long n,i=0;
		cin>>n;
		while(b[i]*b[i]<=n){
			i++;
		}
		cout<<i<<endl;
	}
}