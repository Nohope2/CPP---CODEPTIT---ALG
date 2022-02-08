#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
 bool isPrime[1000006];
void SangNT()
{
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i<=1e6; i++) isPrime[i] = true;
 
    for (int p=2; p*p<=1e6; p++)
    {
        if (isPrime[p] == true)
        {
            for (int i=p*p; i<=1e6; i+=p)
                isPrime[i] = false;
        }
    }
}
void findPrimePair(int n)
{
    bool check=false;
    for (int i=0; i<n; i++)
    {
        if (isPrime[i] && isPrime[n-i])
        {
            cout << i <<' '<< (n-i)<<endl;
            check=true;break;
        }
    }
  if(!check) cout<<-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    SangNT();
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       findPrimePair(n);
   }
    return 0;
}