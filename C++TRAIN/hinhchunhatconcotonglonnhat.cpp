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
int m,n, M[205][205];
void init()
{
   cin>>m>>n;
   FOR(i,m)
   FOR(j,n) cin>>M[i][j];
}
int process(int* arr, int x)
{
    int sum = 0, maxSum = INT_MIN, i,check=-1;
    int tmp = 0;
    for (i = 0; i < x; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            tmp = i + 1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            check = i;
        }
    }
    if (check != -1) return maxSum;
    maxSum = arr[0];
    check = 0;
    for (i = 1; i < x; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            check=i;
        }
    }
    return maxSum;
}
void MAXSUM(int M[][205])
{
    int maxSum = INT_MIN;
    int l, r, i;
    int temp[m], sum;
    for (l=0; l < n; ++l)
     {
        memset(temp, 0, sizeof(temp));
        for (r= l; r < n; ++r) 
        {
            for (i = 0; i < m; ++i) temp[i] += M[i][r];
            sum=process(temp, m);
            if (sum>maxSum) maxSum = sum;
        }
    }
    cout << maxSum << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        init();
       MAXSUM(M);
    }
 
    return 0;
}