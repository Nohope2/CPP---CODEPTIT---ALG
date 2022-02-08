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
		int n,b[10]={};
		cin>>n;
		string a;
		cin>>a;
		f0(i,n)
        {
			if(a[i]=='2') b[2]++;
			else if(a[i]=='3') b[3]++;
			else if(a[i]=='4'){
				b[2]+=2;
				b[3]++;
			}
			else if(a[i]=='5') b[5]++;
			else if(a[i]=='6')
            {
				b[3]++;
				b[5]++;
			}
			else if(a[i]=='7') b[7]++;
			else if(a[i]=='8'){
				b[2]+=3;
				b[7]++;
			}
			else if(a[i]=='9'){
				b[2]++;
				b[3]+=2;
				b[7]++;
			}
		}
		f2(i,7,2)
        {
			f0(j,b[i]) cout<<i;
		}
		cout<<endl;
	}
  return 0;
}