#include<bits/stdc++.h>
using namespace std;
#define MAX 50
#define TRUE 1
#define FALSE 0
int A[MAX][MAX], n,chuaxet[MAX];
void Init()
{
    int i,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
       chuaxet[i]=TRUE;
        for(j=1; j<=n; j++)
        {
        cin>>A[i][j];
        cout<<A[i][j]<<' ';
        }
        cout<<endl;
   }
}
void DFS_Dequi(int u)
{
    int v;
    cout<<u<<' ';
    chuaxet[u]=FALSE;
    for(v=1; v<=n; v++)
    {
        if(A[u][v]&&chuaxet[v])
        DFS_Dequi(v);
    }
}
void DFS_Stack(int u)
{
    int s, t;
    stack <int> stk;
    stk.push(u);
    chuaxet[u]=FALSE;
    cout<<u<<' ';
    while(!stk.empty())
    {
        s=stk.top();
        stk.pop();
        for(t =1;t<=n; t++)
        {
                if(chuaxet[t] && A[s][t])
                {
                    cout<<t<<' ';
                    chuaxet[t] = FALSE;
                    stk.push(s);
                    stk.push(t);break;
                }
        }
    }
}
int main()
{
    int u ;
    cin>>u;
    Init();
    DFS_Stack(u);
    //DFS_Dequi(u);
}
