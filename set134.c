#include<stdio.h>
int main()
{
    int n,a[100000],i,j,m,g;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<=m && j<=a[i+1];j++)
        {
            if(m%j==0 && a[i+1]%j==0)
            {
                g=j;
            }
        }
        m=(m*a[i+1])/g;
    }
    printf("%d",m);
    return 0;
}
