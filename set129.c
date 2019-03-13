#include<stdio.h>

int main() {
   
    int n,dec=0,rem,i,b=1;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        dec=dec+rem*b;
        n=n/10;
        b=b*16;
    }
    printf("%d",dec);
    return 0;
}
