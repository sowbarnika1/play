#include<stdio.h>
int main()
{
    int n,a[100000],i,j,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=p*a[i];
    }
    if(p%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
