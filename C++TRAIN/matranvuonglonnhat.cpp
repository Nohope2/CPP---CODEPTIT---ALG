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
int getMin(int x, int y) { return (x<y)? x: y; }  
int process(char mat[][25],int N) 
{ 
    int max = 0;
    int hor[N][N], ver[N][N]; 
    hor[0][0] = ver[0][0] = (mat[0][0] == 'X'); 
    FOR(i,N)
    { 
        FOR(j,N) 
        { 
            if (mat[i][j] == 'O') 
                ver[i][j] = hor[i][j] = 0; 
            else
            { 
                hor[i][j] = (j==0)? 1: hor[i][j-1] + 1; 
                ver[i][j] = (i==0)? 1: ver[i-1][j] + 1; 
            } 
        } 
    } 
    FOD(i,N-1,1) 
    { 
        FOD(j,N-1,1) 
        { 
            int small = getMin(hor[i][j], ver[i][j]); 
            while (small > max) 
            { 
                if (ver[i][j-small+1] >= small && hor[i-small+1][j] >= small) 
                { 
                    max = small; 
                } 
                small--; 
            } 
        } 
    } 
    return max; 
} 
int main() 
{ 
    faster()
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char mat[25][25];
        FOR(i,N)
        {
            FOR(j,N) cin>>mat[i][j];
        }
         cout << process(mat,N)<<endl; 
    }
    return 0; 
} 