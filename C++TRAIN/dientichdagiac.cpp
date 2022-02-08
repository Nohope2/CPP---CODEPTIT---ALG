
#include<stdio.h>
#include<math.h>
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)

double Smax(double X[], double Y[], int n)
{
    double tmp = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        tmp += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;
    }
    return abs(tmp/2.0);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double X[1005];
        double Y[1005];
        FOR(i,n)
        {
           scanf("%lf %lf",&X[i],&Y[i]);
        }
   printf("%.3lf\n",Smax(X,Y,n));
    }
}