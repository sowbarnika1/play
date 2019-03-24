#include<stdio.h>
#include<string.h>
int main()
{
    char a[26],b[26];
    int i,j,l,m,f,n=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    m=strlen(b);
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            if(b[i]==a[j])
            {
                f=0;
                break;
            }
            else
            {
                f=1;
            }
        }
            a[l]=b[i];
            l++;
            if(f==0)
            {
                n++;
            }
    }
    if(l==26 && n==0)
    {
        printf("complementary");
    }
    else
    {
        printf("non-complementary");
    }
    return 0;
}
