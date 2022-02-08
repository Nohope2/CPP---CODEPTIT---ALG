#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin.ignore();
        cin>>s2;
        long long t1=0,t2=0,t3=0,t4=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='5') s1[i]='6';
            t1=t1*10+(s1[i]-'0');
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='5') s2[i]='6';
            t2=t2*10+(s2[i]-'0');
        }
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='6') s1[i]='5';
            t3=t3*10+(s1[i]-'0');
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='6') s2[i]='5';
            t4=t4*10+(s2[i]-'0');
        }
        cout<<t3+t4<<" "<<t1+t2<<endl;
    }
} 