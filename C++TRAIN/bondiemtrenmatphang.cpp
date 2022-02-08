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
struct bigum{
	int x;
	int y;
	int z;
};
bigum point[4];
bigum vec[3];
void init(){
	for(int i=0;i<4;i++){
		cin >> point[i].x >> point[i].y >> point[i].z;
	}
}
void process(){
	vec[0].x = (point[1].x - point[0].x);
	vec[0].y = (point[1].y - point[0].y);
	vec[0].z = (point[1].z - point[0].z);
	
	vec[1].x = (point[2].x - point[0].x);
	vec[1].y = (point[2].y - point[0].y);
	vec[1].z = (point[2].z - point[0].z);
	
	vec[2].x = (point[3].x - point[0].x);
	vec[2].y = (point[3].y - point[0].y);
	vec[2].z = (point[3].z - point[0].z);
	
	bigum vecxi;
	vecxi.x = vec[0].y * vec[1].z - vec[0].z * vec[1].y;
	vecxi.y = vec[0].z * vec[1].x - vec[0].x * vec[1].z;
	vecxi.z = vec[0].x * vec[1].y - vec[0].y * vec[1].x; 
	int res = 0;
	res = vecxi.x*vec[2].x + vecxi.y * vec[2].y + vecxi.z * vec[2].z;
	if (res == 0 ) cout << "YES\n" ;
	else cout << "NO\n";
}
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}  