#include<stdio.h>
int main()
{
    int n,sum=0,a[100],i,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            r=a[i]%10;
            sum+=r;
            a[i]/=10;
        }
    }
    printf("%d",sum);
}