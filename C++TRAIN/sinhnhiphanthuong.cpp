#include <iostream>
using namespace std;
int N,K;
int x[500];
void in(int x[])
{
  int dem=0,count=0;
    for (int i = 1; i <= N; i++) 
    {
     if(x[i]==1) dem++;
     else
     {
      if(dem==K) count++;
      dem=0;
     }
    }
    if(dem==K) 
    {
       for (int i = 1; i <= N; i++)
       {
         if(x[i]==1) cout<<'A'<<' ';
         else cout<<'B'<<' ';
       }
      cout << endl;
    }
    else
    {
      if(count==1) 
      {
         for (int i = 1; i <= N; i++)
       {
         if(x[i]==1) cout<<'A'<<' ';
         else cout<<'B'<<' ';
       }
      cout << endl;
      }
    }
}
void Try(int i){
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == N)  in(x);
        else Try(i + 1);
    }
}
 
int main(){
    cin >> K >>  N;
    Try(1);
}