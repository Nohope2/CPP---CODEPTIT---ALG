#include<bits/stdc++.h>
using namespace std;
int a[100005]={},n,k;
void init()
{
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
}
void sapxep(int a[], int m, int k)
{
	if(m>=k)return;
	int c = a[(m+k)/2];
	int i = m, j = k;
	while (i < j)
	{
		while (a[i] < c){i++;}
		while (a[j] > c){j--;}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
	       a[j] = temp;
			i++;j--;
		}
	}
	if (i < k){sapxep(a, i, k);}
	if (m < j){sapxep(a, m, j);}
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        init();
        sapxep(a,0,n-1);
        cout<<a[k-1]<<'\n';
    }
     return 0;
}
