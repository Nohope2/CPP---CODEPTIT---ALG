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
struct NhanVien
{
	string ten,gt,ns,dc,ms,nk;
};
void nhap(struct NhanVien &a)
{
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.ms>>a.nk;
}
void inds(struct NhanVien a[],int n){
	for(int i=0;i<n;i++){
		int k=i+1,s=0;
		while(k!=0){
			s++;
			k/=10;
		}
		if(s==1) cout<<"0000";
		else cout<<"000";
		cout<<i+1<<" "<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].ms<<" "<<a[i].nk<<endl;
	}
}
int main(){
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}