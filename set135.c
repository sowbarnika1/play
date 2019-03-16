#include<stdio.h>
int main()
{
    int n,a[100000],i,j,c=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            m=i;
        }
    }
    printf("%d",m);
    return 0;
}
