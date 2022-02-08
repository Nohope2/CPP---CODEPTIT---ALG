#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Box{
	string a;
	string b;
};
bool cmp( string a, string b )
{
	if ( a.size() == b.size()) return a > b;
	return a.size() > b.size();
}
int main(){
	int n;
	cin >> n;
	vector<Box>V;
	for ( int i = 0 ; i < n ; i++ )
    {
		Box tmp;
		cin>> tmp.a >> tmp.b;
		V.push_back(tmp);
	}
	string s;
	cin >> s;
	vector<string>Val;
	vector<Box>Col; 
	for ( int i = 0 ; i < n ; i++ ){
		if ( V[i].a == s ) Val.push_back(V[i].b);
		else if ( V[i].b == s ) Val.push_back(V[i].a);
		else Col.push_back(V[i]); 
	}
	vector<string>res;
	for ( int i = 0 ; i < Val.size() ; i++ ){
		for ( int j = 0 ; j < Col.size() ; j++ ){
			if ( Val[i] == Col[j].a ) res.push_back(Col[j].b);
			else if ( Val[i] == Col[j].b) res.push_back(Col[j].a);
		}
	}
	vector<string>res1; 
	for ( int i = 0 ; i < res.size(); i++ ){
		int check = 0;
		for ( int j = 0 ; j < Val.size() ; j++ ){
			if ( res[i] == Val[j] ){
				check = 1;
				break;
			}
		}
		if (check == 0 ) res1.push_back(res[i]);
	}
	if ( res1.size() == 0 ) cout << "SaiDe";
	else{
		sort(res1.begin(),res1.end(),cmp);
		cout << res1[0];
	}
}