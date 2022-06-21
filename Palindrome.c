#include<stdio.h>
int main()
{
    int sum=0,n,r,l;
    scanf("%d",&n);
    l=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(l==sum)
    printf("True");
    else
    printf("False");
    
}