#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    int a[500],d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(a[i]!=0)
        {
            a[i]=a[i]/10;
            c++;
        }
        if(c%2==0)
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
