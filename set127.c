#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000];
    int i,l,j=0;;
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
       b[j]=a[i];
       j+=2;
    }
    i=1;
    while(i<j-1)
    {
        b[i]='-';
        i+=2;
    }
    printf("%s",b);
    return 0;
}
