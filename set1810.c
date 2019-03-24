#include<stdio.h>
int main()
{
    int n,dec=0,b=1,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        dec=dec+rem*b;
        n=n/10;
        b=b*2;
    }
    b=2;
    while(b!=0)
    {
    if(dec<b)
        {
            printf("%d",b);
            break;
        }
        else if(dec>b)
        {
            b=b*2;
        }
    }
    return 0;
}
