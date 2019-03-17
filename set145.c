#include<stdio.h>
int main()
{
    int n,a[100],i,j,t;
    float m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        m=floor(n/2);
    }
    if(n%2!=0)
    {
        m=floor((n-1)/2);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ",a[i]);
    }
    for(i=m;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ",a[i]);
    }
    return 0;
}
