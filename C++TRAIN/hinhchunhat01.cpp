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
int maxHist(int row[],int n)
{
    stack<int> stk;
    int tmp;
    int Max = 0;
    int area = 0;
    int i = 0;
    while (i < n) 
    {
        if (stk.empty() || row[stk.top()] <= row[i])
            stk.push(i++);
        else 
        {
            tmp = row[stk.top()];
            stk.pop();
            area = tmp * i;
 
            if (!stk.empty())
                area = tmp * (i - stk.top() - 1);
            Max= max(area, Max);
        }
    }
    while (!stk.empty()) {
        tmp = row[stk.top()];
        stk.pop();
        area = tmp * i;
        if (!stk.empty())
            area =tmp * (i - stk.top() - 1);
 
        Max = max(area, Max);
    }
    return Max;
}
int process(int A[][505],int m,int n)
{
    int result = maxHist(A[0],n);
    for (int i = 1; i<m; i++) 
    {
        for (int j = 0; j < n; j++)
            if (A[i][j]) A[i][j] += A[i - 1][j];
        result = max(result, maxHist(A[i],n));
    }
 
    return result;
}
int main()
{
    faster();
        int m,n;
        cin>>m>>n;
        int A[505][505];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++) cin>>A[i][j];
        }
          cout<< process(A,m,n)<<endl;
 
    return 0;
}