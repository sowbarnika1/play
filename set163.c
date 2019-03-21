#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,k,j;
    scanf("%s",a);
    scanf("%d",&k);
    j=strlen(a);
    i=k-1;
    while(i<j)
    {
        printf("%c ",a[i]);
        i=i+k;
    }
    return 0;
}
