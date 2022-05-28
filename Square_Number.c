#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*i==n)
        {
            printf("True");
            c=1;
            break;
        }
    }
    if(c==0)
    printf("False");
}