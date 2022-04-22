#include<stdio.h>
int main()
{
    int fact=0,i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            fact+=1;
        }
        i++;
    }
    if(fact==2)
    printf("prime");
    else
    printf("not a prime");
}