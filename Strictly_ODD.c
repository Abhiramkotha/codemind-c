#include<stdio.h>
int main()
{
    int a[100],i,n,c=0,c1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        c++;
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            if(a[i]%2!=0)
            {
                c1++;
            }
        }
    }
    if(c==c1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}