#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,m,n;
int mat[1005][1005];
void init()
{
    cin>>m>>n>>a>>b>>c>>d;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) cin>>mat[i][j];
    }
}
struct Point
{
    int x;
    int y;
};
struct qN
{
    Point pt; 
    int dist;  
};
bool kmp(int row, int col)
{
    return (row >=0)&&(row<m)&&(col>=0)&&(col < n);
}
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};
int BFS(int mat[][1005], Point res, Point tmp)
{
    if (!mat[res.x][res.y] || !mat[tmp.x][tmp.y]) return -1;
    bool f[m][n];
    memset(f, false, sizeof f);
    f[res.x][res.y] = true;
    queue<qN> q;
    qN s = {res, 0};
    q.push(s);
    while (!q.empty())
    {
        qN cutom = q.front();
        Point pt = cutom.pt;
        if (pt.x == tmp.x && pt.y == tmp.y) return cutom.dist;
        q.pop();
        for (int i=0;i<4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];
            if (kmp(row, col) && mat[row][col] &&
               !f[row][col])
            {
                f[row][col] = true;
                qN now = { {row, col},cutom.dist + 1 };
                q.push(now);
            }
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        init();
        Point res={a,b};
        Point tmp={c,d};
        int check=BFS(mat,res,tmp);
        if (check!=-1) cout<<check<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}