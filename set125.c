#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    for(int i=0;i<100;i++)
    {
        a[i]='\0';
    }
    scanf("%s %s",a,b);
    int l,m,i;
    l=strlen(a);
    m=strlen(b);
    if(l==m)
    {
    for(i=0;i<m;i++)
    {
        a[l]=b[i];
        l++;
    }
    printf("%s",a);
    }
    else
    {
        for(i=0;i<m;i++)
        {
        a[l-1]=b[i];
        l++;
        }
    printf("%s",a);
    }
    return 0;
}
