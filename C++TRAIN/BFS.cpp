#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int A[MAX][MAX], n;
bool chuaxet[MAX];
void Init()
{
    int i,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
       chuaxet[i]=true;
        for(j=1; j<=n; j++)
        {
        cin>>A[i][j];
        }
        cout<<endl;
   }
}
void BFS(int u)
{
    int v;
   queue<int> q;
   q.push(u);
   chuaxet[u]=false;
    while(!q.empty())
    {
         u=q.front();
         cout<<u<<' ';
         q.pop();
        for(v=1; v<=n; v++)
        {
            if(A[u][v] && chuaxet[v])
            {
                q.push(v);
                chuaxet[v]=false;
            }
        }
    }
}

int main()
{
    int u ;
    cin>>u;
    Init();
    BFS(u);
}
