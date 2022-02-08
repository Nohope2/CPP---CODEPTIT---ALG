#include<bits/stdc++.h>
using namespace std;
struct demso
{
	int so;
	int dem;
};
bool check(demso a,demso b)
{
	if(a.dem==b.dem)
	return a.so<b.so;
	return a.dem>b.dem;
}
main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
         int m,n=0;
         cin>>m;
         vector<demso>lish(m);
         vector<int>s(m);
         for(int i=0;i<m;i++) cin>>s[i];
        for(int i=0;i<m;i++)
        {
        	int x=s[i],k=-1;
            for(int i=0;i<n;i++) 
			{
				if(lish[i].so==x) 
				{
					k=i;break;
				}
			}
            if(k==-1)
			{
                lish[n].so=x;lish[n].dem=1;n++;
            }
            else lish[k].dem++;
        }
      int max=0,j;
      for(int i=0;i<n;i++)
      {
      	if(lish[i].dem>max)
		  {
		  	max=lish[i].dem;j=i;
		   } 
	  }
     for(int i=0;i<n;i++)
     {
     	if(max==0)
     	{
     		cout<<s[i];break;
		}
		else 
		{
			cout<<lish[j].so;
			break;
		}
	 }
}