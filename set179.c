#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,n,j,l,c=1;;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        if(a[i]!='\0')
        {
        printf("%c%d",a[i],c);
        }
    }
    return 0;
}
