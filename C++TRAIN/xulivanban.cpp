#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void process(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if( s[i] >= 'A' && s[i] <='Z') s[i] += 32;
	}
	int n = strlen(s)-1;
	if( s[n] == '.' || s[n] == '?' || s[n] == '!') s[n] ='\0';
}
bool check(char s[])
{
	int n = strlen(s)-1;
	if( s[n] == '.' || s[n] == '?' || s[n] == '!') return true;
	return false;
}
char t[1000];
int main()
{	
	bool kt=true ;
	while(scanf("%s",t)!=-1)
	{
		if(check(t)) 
		{
			if(kt)
			{
				process(t);
				t[0] -= 32;
				printf("%s\n",t);
				kt=true ;
			}
			else
			{
				process(t);
				printf("%s\n",t);
				kt=true;
			}
		}
		else
		{
			if(kt)
			{
				process(t);
				t[0] -= 32;
				printf("%s ",t);
				kt=false;
			}
			else
			{	process(t);
				printf("%s ",t);
			}
		}
	}
}