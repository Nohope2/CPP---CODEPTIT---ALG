#include<stdio.h>
#include<math.h>
int A[1000003]={};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&A[i]);
	if(n>=k)
	{
	 for(i=k;i<n;i++) printf("%d ",A[i]);
	for(i=0;i<k;i++) printf("%d ",A[i]);
	}
	else
	{
		int j=k%n;
		if(j==0)
		{
			for(i=0;i<n;i++) printf("%d ",A[i]);
		}
	    else
		{
		for(i=j;i<n;i++) printf("%d ",A[i]);
		for(i=0;i<=j-1;i++) printf("%d ",A[i]);
		}
	  }
      printf("\n");
    }
	return 0;
}