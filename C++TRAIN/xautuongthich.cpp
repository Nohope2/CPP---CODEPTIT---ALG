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
string cut(string s , int l , int r)
{
    string a;
    for(int i = l ; i <= r ; i ++) a.push_back(s[i]);
    return a;
}

bool check(string s1 , string s2)
{
    if(s1 == s2)return true;
    else
    {
        if( s1.size()%2==0 && s1.size() == s2.size())
        {
            string s11 , s12 , s21 , s22;
            s11 = cut(s1,0,s1.size()/2-1);
            s12 = cut(s1,s1.size()/2,s1.size()-1);
            s21 = cut(s2,0,s2.size()/2-1);
            s22 = cut(s2,s2.size()/2,s2.size()-1);
            return (check(s11,s21) && check(s12,s22)) || (check(s11,s22) && check(s12,s21));
        }
        else return false;
    }
}
int main()
{
    faster();
    string s1,s2;
    cin>>s1>>s2;
    if(check(s1,s2)) cout<<"YES";
    else cout<<"NO";
}