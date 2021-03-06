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
int Bsearch(vll v , int l, int r , ll x){
	while(l <= r){
		int mid =(r+l)/2;
		if (v[mid] == x) return mid;
		else if (v[mid] < x) l = mid + 1;
		else r = mid-1;
	}
	return -1;
}
void process(){
	int n;
	cin >> n;
	vll v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin() , v.end());
	for(int i=0;i<n-2;i++){
		for(int j=0;j<n-1;j++){
			ll c = sqrt(v[i]*v[i] + v[j]*v[j]);
			if (c*c == v[i]*v[i] + v[j]*v[j]){
				int indez = Bsearch(v,j,n-1,c);
				if (indez != -1){
					cout << "YES"<<endl;
					return;
				}
			}
		}
	}
	cout << "NO"<<endl;
}
 
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--)
	process();
	return 0;
}