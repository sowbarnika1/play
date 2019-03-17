#include<stdio.h>
int main()
{
    int n,a[100],l,r,i,min;
    scanf("%d %d %d",&n,&l,&r);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[l];
    for(i=l;i<=r;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
