#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int N;
int a[1005][1005];
void process()
{
    if(a[1][1]==-1||a[N][N]==-1) printf("NO");
    else
    {
        for (int i = 0; i <= N; i++){
            a[0][i] = -1;
            a[i][0] = -1;
        }
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {   
                if(i == 1 && j == 1) continue;
                else if (a[i][j] == -1 || a[i][j - 1] == -1 && a[i - 1][j] == -1 ) a[i][j] = -1;
                else a[i][j] += max(a[i - 1][j], a[i][j - 1]);
            }
        }
        if(a[N][N] == -1) cout << "NO";
        else {
            cout << "YES\n";
            cout << a[N][N];
        }
    }
}
int main()
{
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
      for(int j=1;j<=N;j++) scanf("%d",&a[i][j]);
   }
    process();
 
    return 0;
}