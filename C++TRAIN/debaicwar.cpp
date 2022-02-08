#include<iostream>
using namespace std;
typedef unsigned long long  LLD;
LLD Base=20122007;
LLD DBV(LLD a,LLD n)
{
    if(n==0) return 1;
    LLD t=DBV(a,n/2);
    t=(t*t)%Base;
    return n%2?(t*a)%Base:t;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        LLD a,i,T=1;
        cin>>a;
        for(i=1;i*i<a;i++)
        if(a%i==0)
        {
            T=(T*(DBV(3,i)-1))%Base;
            T=(T*(DBV(3,a/i)-1))%Base;
        }
        if(i*i==a) T=(T*(DBV(3,i)-1))%Base;
        cout<<T<<'\n';
    }
}