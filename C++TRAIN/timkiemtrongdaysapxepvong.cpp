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
int arr[10000005],n,key;
void init()
{
    cin>>n>>key;
    FOR(i,n) cin>>arr[i];
}
int TrBS(int l, int h, int key)
{
    if (l > h) return -1;
    int mid = (l + h) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[l] <= arr[mid])
    {
        if (key >= arr[l] && key <= arr[mid]) return TrBS(l, mid - 1, key);
        return TrBS(mid + 1, h, key);
    }
    if (key >= arr[mid] && key <= arr[h]) return TrBS(mid + 1, h, key);
    return TrBS(l, mid - 1, key);
}
int main()
{
    faster();
    int t;
    cin>>t;
    while(t--)
    {
       init();
       int index = TrBS(0, n - 1, key);
       cout<<index+1<<endl;
    }

}