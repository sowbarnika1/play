#include<stdio.h>
int main()
{
    int n,m,a,b,i,f=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            if(j==m)
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
