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
void MINSUM(int arr[], int n)
{
    int l, r, min_sum, sum, min_l, min_r; 
    min_l = 0; 
    min_r = 1; 
    min_sum = arr[0] + arr[1]; 
      
    for(l = 0; l < n - 1; l++) 
    { 
        for(r = l + 1; r < n; r++) 
        { 
            sum = arr[l] + arr[r]; 
            if(abs(min_sum) > abs(sum)) 
            { 
                min_sum = sum; 
                min_l = l; 
                min_r = r; 
            } 
        } 
    } 
    cout<<min_sum<<endl; 
}
int main()
{
    faster();
    int t;
    cin>>t;
    while(t--)
    {
       int n,arr[10003];
       cin>>n;
       FOR(i,n) cin>>arr[i];
       MINSUM(arr, n);
    }
    return 0;
}
