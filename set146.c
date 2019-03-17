#include<stdio.h>
int main()
{
    int n,a[100],i,c=1,k,j,f=1;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        break;
        }
        else
        {
            f=0;
        }
    }
        if(f==1)
        {
            printf("yes");
            printf(" %d",c);
        }
        else
        {
            printf("no");
        }
        return 0;
    }
    
