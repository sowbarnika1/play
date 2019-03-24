#include<stdio.h>
int main()
{
    int n,a[100],i,j,k=0,t;
    scanf("%d",&n);
    while(n)
    {
        a[k]=n%10;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d",a[i]);
    }
    return 0;
}
