#include<bits/stdc++.h>
 using namespace std; 
int a[1000005]; 
 int main(){
     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL); 
     int t; 
     cin>>t; 
     while(t--)
     { 
         int n; 
         cin>>n; 
         for(int i=1;i<=n;i++) 
         cin>>a[i]; set<int>s; 
         int u=0; 
         for(int i=1;i<=n;i++)
         { 
             s.insert(a[i]); 
             if(i-s.size()==1)
             { u=i; break; }
             
         } 
         if(s.size()==n) cout<<"-1"<<"\n"; 
         else cout<<a[u]<<"\n";
     }
}