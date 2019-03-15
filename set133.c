#include <stdio.h>

int main(void) 
{
	int n,i,j,f=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					f=0;
					break;
				}
			}
			if(f==1)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
