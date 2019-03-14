#include <stdio.h>
int main() 
{
int n,bin=0,rem,p=1,c=0;
scanf("%d",&n);
while(n)
{
rem=n%2;
bin=bin+rem*p;
n=n/2;
p=p*10;
}
while(bin)
{
    bin=bin/10;
    c++;
}
printf("%d",c);
return 0;
}

 
