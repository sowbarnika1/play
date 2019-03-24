#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,l,n=1;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        n=1;
        for(j=i+1;j<l;j++)
        {
            if((a[i]==a[j]) && (a[j]>='a'&& a[j]<='z'))
            {
                a[j]=a[j]-32;
                n++;
            }
        }
        if(n>1)
        {
            a[i]=a[i]-32;

        }
    }
    puts(a);
    return 0;
}
