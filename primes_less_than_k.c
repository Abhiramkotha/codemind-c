#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,f=0,k;
    float sum,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=1;j<=a[i];j++)
        {
            
            if(a[i]%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            if(a[i]<=k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
   
}