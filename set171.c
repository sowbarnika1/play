#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100];
    int i,j,l,n,f,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
        if(f==1)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
