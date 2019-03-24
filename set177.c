#include<stdio.h>
int main()
{
    char a[1000];
    int n,c=0,i,f=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
    for(i=1;i<=c;i++)
    {
        if(i==1||i==c)
        {
        if(c%i==0)
        {
            f=0;
        }
        }
        else
        {
            if(c%i==0)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
