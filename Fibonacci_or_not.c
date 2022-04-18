#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
       if(c==n)
       {
           printf("True");
           break;
       }
       else
       if(c>n)
       {
           printf("False");
           break;
       }
       a=b;
       b=c;
    }
}