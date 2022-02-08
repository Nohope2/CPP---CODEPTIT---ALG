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
		int n,m,k;
		cin>>n>>m>>k;
		long long a1[n],a2[m],a3[k];
		for(int i=0;i<n;i++) cin>>a1[i];
		for(int i=0;i<m;i++) cin>>a2[i];
		for(int i=0;i<k;i++) cin>>a3[i];
		int i=0,j=0,h=0;
		vector <long long> a;
		while(i<n&&j<m&&h<k){
			if(a1[i]==a2[j]&&a2[j]==a3[h]){
				a.push_back(a1[i]);
				i++;
				j++;
				h++;
			}
			else if(a1[i]<a2[j]) i++;
			else if(a2[j]<a3[h]) j++;
			else h++;
		}
		if(a.size()==0) cout<<-1<<endl;
		else{
			for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
			cout<<endl;
		}
	}
  return 0;
}