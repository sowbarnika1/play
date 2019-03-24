#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[100],s[100][100];
    int i,k=0,l,c=0,j=0,m,n;
    gets(a);
    scanf("%s",b);
    l=strlen(a);
    n=strlen(b);
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            s[j][k]=a[i];
            k++;
        }
        if(a[i]==' ')
        {
            j++;
            for(m=0;m<k;m++)
            {
                s[i][m]='\0';
            }
            k=0;
        }
    }
    for(i=0;i<j+1;i++)
    {
        c=0;
        l=strlen(s[i]);
        if(l==n)
        {
        for(k=0;k<l;k++)
        {
         if(s[i][k]==b[k])
         {
             c++;
         }
        }
        if(c!=l)
        {
            printf("%s ",s[i]);
        }
        }
        else
        {
            printf("%s ",s[i]);
        }
}
        return 0;
    }
