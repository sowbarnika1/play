#include <stdio.h>
#include<string.h>
int main()
{
	char a[20];
	scanf("%s",a);
	int len,flag;
	len=strlen(a);
	if(a[0]<'3' && a[1]<'10' && a[2]=='/' && a[3]<'1' && a[4]<'10' && a[5]=='/' && a[6]<'10' && a[7]<'10' && a[8]<'10' && a[9]<'10')
	{
		flag=1;
	}
	else
	{
		flag=0;
		
	}
	if(a[0]=='3' && a[1]<'2')
	{
	    flag=1;
	}
	else
	{
	    //flag=0;
	}
	if(a[3]=='1' && a[4]<'3')
	{
	    flag=1;
	}
	else
	{
	    //flag=0;
	}
	if(flag==0)
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	
	return 0;
}
