#include<stdio.h>
int main()
{
    int a[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            c++;
        }
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}