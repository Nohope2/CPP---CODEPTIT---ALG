#include<bits/stdc++.h> 
#define endl "\n"
using namespace std; 
int main(){ 
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t; 
    cin>>t; 
    string str; 
    while(t--)
    { 
     cin>>str; 
     int len=str.size(); 
     int dem=0; 
     for(int i=0;i<len;i++)
     { 
         for(int j=i;j<len;j++)
         { 
             if(str[i]==str[j]) dem++;
         }
     } 
      cout<<dem<<endl;
    }
}