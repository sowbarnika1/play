#include <stdio.h>
#include<string.h>
int main() 
{
	char a[30];
	scanf("%s",a);
	int i,l,sum=0,b=1;
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		if(a[i]>='A' && a[i]<='F')
		{
			a[i]=(a[i]-65)+10;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			a[i]=a[i]-48;
		}
		sum=sum+(a[i]*b);
		b=b*16;
	}
	printf("%d",sum);
	return 0;
}
