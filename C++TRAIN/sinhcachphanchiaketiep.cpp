#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int n, k, X[MAX];
bool OK=true;
void Init()
{
 cin>>n; k = 1; X[k] = n;
}
void Process() 
{
    for (int i=1; i<=k; i++)
    cout<<X[i]<<" ";
    cout<<endl;
}
void sinhcach()
{
    int i = k, j, R, S,D;
    while (i > 0 && X[i]==1 ) i--;
    if (i>0 ) 
    {
        X[i] = X[i] - 1;
        D = k - i + 1;
        R = D / X[i];
        S = D % X[i];
        k= i;
        if (R>0)
        {
            for ( j = i +1; j<=i + R; j++) X[j] = X[i];
            k = k + R;
        }
        if (S>0 ){k=k+1; X[k] = S; }
    }
    else OK =false;
}
int main() 
{
    Init();
    while (OK)
    {
        Process();
        sinhcach();
    }
}