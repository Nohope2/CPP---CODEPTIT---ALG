#include<stdio.h>
#include<math.h>
long long a[1000005]={};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
	long long n,i,sum=0;
	long long dem=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	
    }
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			dem++;
		}
	}
	  if(dem==n) printf("-1");
	  else
	  {
		long long max=a[0];
	
		for(i=0;i<n;i++)
		{
			if((sum+a[i])<0)
			{
				sum=0;
				continue;
			}
			else
			{
				sum+=a[i];
			}
			if(max<sum) max=sum;
		}
		printf("%lld\n",max);
	}
  }
}