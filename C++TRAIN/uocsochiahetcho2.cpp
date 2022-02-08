#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
long long demuoc(ll n)
{
	ll dem=0,i; 
	for ( i=2; i<sqrt(n); i++){
		if (n%i==0){
			if (i%2==0) dem++;
			if ((n/i)%2==0) dem++;
		}
	} 
	ll x=(ll)(sqrt(n));
	if ((n/x)==sqrt(n)&&x%2==0 ) dem++;
	if (n%2==0) dem++;
	return dem;
}
 
int main(){
	ll n,T;
	cin>>T;
	while(T--){
		cin>>n;
		cout<<demuoc(n)<<endl;;
	}
    return 0;
} 