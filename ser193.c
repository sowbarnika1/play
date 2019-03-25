#include<stdio.h>
int main()
{
int n,i,t=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
        if(a[i]==0)
        {
            t++;
        }
        else
        {
            printf("%d ",a[i]);
        }
}
for(i=0;i<t;i++)
{
    printf("0 ");
}
    return 0;
}
