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
 
template<class T> string toString(T n) 
{
	bool check = false;
	string res = "";
	if( n == 0 ) 
		res += '0';
	if( n < 0 ) 
    {
		n = -n;
		check = true;
	}
	while( n > 0 ) 
    {
		res = (char)(n%10+'0') + res;
		n /= 10;
	}
	if(check) 
		res = '-' + res;
	return res;
}
 
int main() {
	ifstream mfile;
	mfile.open("VANBAN.txt",ios::in);
	ofstream Mfile;
	Mfile.open("MUCLUC.txt",ios::out);
	string first , last , s; 
	while( getline(mfile,s) ) {
		if( s.size() > 4 ) {
			string ans = ""; 
            int i;
			for(i = 0 ; i < 4 ; i++ ) {
				ans += s[i];
			}
			if( ans == "Page" ) {
				long long LL = 0;
				for( i++ ; i < s.size() ; i++ ) {
					LL = LL*10 + (int)(s[i]-'0');
				}
				last = "--- " + toString(LL);
			}
		}
		if( s.size() > 7 ) {
			bool check = false;
			string ans = ""; int i ;
			for(i = 0 ; i <= 6 ; i++ ) ans += s[i];
			if( ans == "Level1:") {
				first = ">";
				check = true;
			}
			else if( ans == "Level2:") {
				first = ">>";
				check = true;
			}
			else if( ans == "Level3:") {
				first = ">>>";
				check = true;
			}
			ans = "";
			for(i++ ; i < s.size() ; i++ ) ans += s[i];
			if( check )
			Mfile << first << ans << last << endl;
		}
	} 
	mfile.close();
	Mfile.close();
}