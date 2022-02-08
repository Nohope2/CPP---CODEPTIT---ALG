#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
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
int main() {
    faster();
    ll n; 
    cin >> n;
    vector <ll> a(n + 3);
    vector <ll> L(n + 3), R(n + 3);
    stack <ll> st;
    FOR(i,0,n-1) cin >> a[i];
    FOR(i,0,n-1)
    {
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (st.empty())  L[i] = -1;
        else  L[i] = st.top();
        st.push(i);
    }
    st = stack<ll> {};
    FOD(i,n-1,0)
    {
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (st.empty()) R[i] = n;
        else  R[i] = st.top();
        st.push(i);
    }
    ll res = 0;
    FOR(i,0,n-1){
        if (R[i] - L[i] - 1 >= a[i])  res = max(res, a[i]);
        else res=max(res,R[i]-L[i]-1);
    }
    cout << res*res << endl;
}