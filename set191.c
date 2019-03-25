#include<stdio.h>
int main()
{
    int n,i,f=0,b=3,m=7;
    scanf("%d",&n);
    if(n<=100)
    {
    while(b<100||m<100)
    {
       if(n==b||n==m)
       {
           f=1;
           break;
       }
       else
       {
           f=0;
           b=b+3;
           m=m+7;
       }
    }
   if(f==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
    }
    return 0;
}
