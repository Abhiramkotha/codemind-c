#include<stdio.h>
int main()
{
    int n,i,r,c;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            c=n*i;
            printf("%d x %d = %d
",n,i,c);
        }
    }
}