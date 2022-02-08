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
vector <int> a(10005,0);
void SangNT(){
	for(int i=2;i*i<=10000;i++){
		if(a[i]==0){
			for(int j=i*i;j<=10000;j+=i){
				if(a[j]==0) a[j]=i;
			}
		}
	}
	f1(i,1,10000) if(a[i]==0) a[i]=i;
}
int main(){
	faster();
	SangNT();
	int t;
	cin>>t;
	while(t--)
    {
		int n;
		cin>>n;
		f1(i,1,n) cout<<a[i]<<" ";
		cout<<endl;
	}
}