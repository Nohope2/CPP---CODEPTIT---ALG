#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char c;
		int n=0,a[205],i;
		int t=1;
		do
		{
			scanf("%d",&a[n]);n++;
			c=getchar();
	    }
        while(c!='\n');
	           int dem1=0,dem2=0;
				for(i=0;i<n;i++)
				{
					if(a[i]%2==0) dem1++;
				    else dem2++;
				}
				if(n%2==0)
				{
					if(dem1>dem2) printf("YES\n");
					else printf("NO\n");
				}
				else
				{
					if(dem1<dem2) printf("YES\n");
					else printf("NO\n");
				}
	}
}