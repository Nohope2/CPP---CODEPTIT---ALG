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
struct data{
	string x;
	int s;
};
bool check(string a){
	int n=a.size();
	for(int i=0;i<=(n-1)/2;i++) if(a[i]!=a[n-i-1]) return false;
	return true;
}
bool cmp(struct data a,struct data b){
	if(a.x.size()==b.x.size()) return a.x>b.x;
	return a.x.size()>b.x.size();
}
int main(){
    faster();
	string a;
	vector <data> b;
	while(cin>>a)
    {
		if(a.size()==1) continue;
		if(check(a))
        {
			int k=-1;
			FOR(i,sz(b))
            {
				if(a==b[i].x)
                {
					k=i;
					break;
				}
			}
			if(k==-1){
				struct data c;
				c.x=a;
				c.s=1;
				b.push_back(c);
			}
			else b[k].s++;
		}
	}
	sort(b.begin(),b.end(),cmp);
	FOR(i,sz(b)) cout<<b[i].x<<" "<<b[i].s<<endl;
}