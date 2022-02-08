#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[10][10];
 string s1,s2;
int tdx1 , tdy1 , tdx2 , tdy2;
int X[8]={-2,-2,-1,-1,1,1,2,2};
int Y[8]={-1,1,-2,2,-2,2,-1,1};
struct dta
{
    int x, y, dem;
    dta()
    {
        dem=0;
    }
    dta(int X, int Y, int Dem)
    {
        x=X; y=Y; dem=Dem;
    }
};
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        queue <dta> Q;
        cin>>s1;
        cin>>s2;
        tdx1=int(s1[0]-'a')+1;
        tdx2=int(s2[0]-'a') +1;
         tdy1=int(s1[1]-'0');
         tdy2=int(s2[1]-'0');
         if(tdx1==tdx2&&tdy1==tdy2) cout<<0;
         else
         {
            for (int i=1; i<=8; i++)
            {
                for (int j=1; j<=8; j++) a[i][j]=0;
            }
            Q.push(dta(tdx1,tdy1,0));
            a[tdx1][tdy1]=1;
            int k=1,count;
            while (!Q.empty())
            {
                dta tmp = Q.front();
                Q.pop();
                for (int k=0; k<8; k++)
                {
                    int left = X[k]+tmp.x;
                    int right = Y[k]+tmp.y;
                    if (1<=left && left <=8 && 1<=right && right <=8 && a[left][right]==0)
                    {
                        a[left][right]=1;
                        Q.push(dta(left,right,tmp.dem+1));
                        if (left==tdx2 && right==tdy2)
                        {
                            cout<<tmp.dem+1;
                            k=0;
                        break;
                        }
                    }
                }
                if(k==0) break;
            }
         }
        cout<<endl;
    }
    return 0;
}
