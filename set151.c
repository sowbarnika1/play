#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100];
    int i,j,l,m,k,n,c=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(a[i]);
        for(j=i+1;j<n;j++)
        {
        m=strlen(a[j]);
        if(l==m)
        {
            for(k=0;k<m;k++)
            {
                if(a[i][k]==a[j][k])
                {
                    c++;
                }
            }
            if(c==m)
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
