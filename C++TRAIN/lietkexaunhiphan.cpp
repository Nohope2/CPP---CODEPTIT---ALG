#include <iostream> 
#include <vector> 
#include <math.h> 
using  namespace  std ; 
int  main () 
{ 
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
	int  n ; 
	cin  >>  n ; 
	if(n<=0) return 0;
    vector < string >  a ; 
    a.push_back ("0"); 
    a.push_back ("1"); 
    for  ( int i=2; i<pow(2,n);i*=2 ) 
    { 
        for  ( int  j=0 ; j<=i-1 ; j++ )  a.push_back (a[j]); 
        for  ( int  j = 0 ; j<i ;j++ )  a [j] = "0" + a[j]; 
        for  ( int  j =i; j<2*i;j++ )  a [j] = "1"+a [j]; 
    } 
    for  ( int  i = 0; i<a.size(); i++ )  cout<<a[i]<<' ' ; 
    cout<<endl;
}
}
 
 