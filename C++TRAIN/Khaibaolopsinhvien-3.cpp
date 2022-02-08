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
#define a() a
void Xuli(string a,vector <string> &b)
{
	string x="";
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		if(a[i]==' '){
			b.push_back(x);
			x="";
		}
		else x=x+a[i];
	}
	b.push_back(x);
}
void chuanhoa(string &a){
	vector <string> b;
	Xuli(a,b);
	a="";
	for(int i=0;i<b.size();i++){
		if(b[i]!=""){
			b[i][0]-=32;
			a=a+b[i];
			a=a+" ";
		}
	}
}
class SinhVien{
	public:
	string masv,ten,lop,ns;
	float gpa;
	friend istream &operator>>(istream &input,SinhVien &a){
		getline(cin,a.ten);
		cin>>a.lop>>a.ns>>a.gpa;
		a.masv="B20DCCN001";
		if(a.ns[1]=='/') a.ns="0"+a.ns;
		if(a.ns[4]=='/') a.ns.insert(a.ns.begin()+3,'0');
		chuanhoa(a.ten);
		return input;
	}
	friend ostream &operator<<(ostream &output,SinhVien a){
		cout<<a.masv<<" "<<a.ten<<a.lop<<" "<<a.ns;
    	printf(" %.2f",a.gpa);
		return output;
	}
};
int main() {
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}