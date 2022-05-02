#include<stdio.h>
int main()
{
    int n,r,rev=0,t=0,s=0;
    scanf("%d",&n);
    t=n*n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    s=rev*rev;
    rev=0;
    while(s)
    {
        r=s%10;
        rev=rev*10+r;
        s=s/10;
        
    }
    if(rev==t)
    printf("True");
    else
    printf("False");
}