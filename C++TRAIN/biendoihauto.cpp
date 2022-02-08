#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define PI 3.141592653589793238
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
ll becheck(char x)
{
    if(x=='^') return 5;
    if(x=='*'||x=='/') return 4;
    if(x=='+'||x=='-') return 3;
    return 2;
}
int main()
{
    faster();
  string s,res="";
    cin>>s;
    stack<char>sr;
    FOR(i,sz(s)) 
    {
        if(s[i]>='A'&&s[i]<='Z') res+=s[i];
        else if(s[i]>='a'&&s[i]<='z') res+=s[i];
        else if(s[i]=='(') sr.push(s[i]);
        else if(s[i]==')')
        {
            while(sr.size()&&sr.top()!='(')
            {
                res+=sr.top();
                sr.pop();
            }
            sr.pop();
        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
        {
            while(sr.size()&&becheck(sr.top())>=becheck(s[i]))
            {
                res+=sr.top();
                sr.pop();
            }
            sr.push(s[i]);
        }
    }
    while(!sr.empty())
    {
        if(sr.top()!='(') res+=sr.top();
        sr.pop();
    }
    cout<<res<<endl;
  return 0;
}