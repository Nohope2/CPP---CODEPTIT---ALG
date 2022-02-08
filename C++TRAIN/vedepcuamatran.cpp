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
int process(int matrix[][405],int n)
{
    int sumRow[n], sumCol[n];
    memset(sumRow, 0, sizeof(sumRow));
    memset(sumCol, 0, sizeof(sumCol));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            sumRow[i] += matrix[i][j];
            sumCol[j] += matrix[i][j];
        }
    int maxSum = 0;
    for (int i = 0; i < n; ++i) {
        maxSum = max(maxSum, sumRow[i]);
        maxSum = max(maxSum, sumCol[i]);
    }
    int count = 0;
    for (int i=0,j=0;i<n&&j<n;) 
    {
        int res = min(maxSum - sumRow[i],maxSum - sumCol[j]);
        matrix[i][j] += res;
        sumRow[i] += res;
        sumCol[j] += res;
        count += res;
        if (sumRow[i] == maxSum) ++i;
        if (sumCol[j] == maxSum) ++j;
    }
    return count;
}
int main()
{
        int n;
        cin>>n;
        int matrix[405][405];
        FOR(i,n)
        {
            FOR(j,n) cin>>matrix[i][j];
        }
        cout << process(matrix,n) << endl;
    return 0;
} 