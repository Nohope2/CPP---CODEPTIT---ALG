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
bool check(string s){			
	for(int i=1;i<s.length();i++){
		if (s[i]<=s[i-1]) return true;		
	}
	return false;	
}
bool check0(string s){
	if (s[0]=='0') return false; 
	return true;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		if (check(s)==false){
			cout<<-1<<endl;
			continue;
		}
		int index=s.length()-1;
		for (int i=s.length()-1;i>=1;i--){
			if (s[i-1]>s[i]){
				index=i;
				break;
			}
		}
		int move=index;
		char maxx=s[index];
		for(int i=index+1;i<s.length();i++){
			if (s[i]>maxx && s[i]<s[index-1]){
				move=i;
				maxx=s[i];
			}
		}
		swap(s[index-1],s[move]);
		if (check0(s)==false) cout<<-1<<endl;
		else cout<<s<<endl; 
	}	
 
return 0;
}