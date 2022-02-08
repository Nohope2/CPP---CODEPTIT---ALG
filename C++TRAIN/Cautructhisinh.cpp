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
struct ThiSinh
{
	string ten,ns;
	float s1,s2,s3;
};
void nhap(struct ThiSinh &a)
{
	getline(cin,a.ten);
	cin>>a.ns>>a.s1>>a.s2>>a.s3;
}
void in(struct ThiSinh a){
	cout<<a.ten<<" "<<a.ns<<" ";
	printf("%.1f",a.s1+a.s2+a.s3);
}
int main(){
	struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}