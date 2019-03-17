#include<stdio.h>
int main()
{
    int n,rem,i,j=0,a[100],p;
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        a[j]=rem;
        j++;
        n=n/2;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==1)
        {
            p=i;
            break;
        }
    }
    printf("%d",p+1);
    return 0;
}
