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
int fibo(int n){
	if(n<4) return 1;
	int a=1,b=1;
	while(a<n){
		int k=a+b;
		b=a;
		a=k;
	}
	if(a==n) return 1;
	else return 0;
}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			if(fibo(x)) cout<<x<<" ";
		}
		cout<<endl;
	}
}