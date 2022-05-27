#include<stdio.h>
int main()
{
    int a,b,n,arr[100],i,sum=0,min=9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(!(arr[i]>=a && arr[i]<=b))
        
        {
            if(arr[i]<min)
            {
                min=arr[i];
                sum++;
            }
        }
    }
    if(sum==0)
    printf("-1");
    else
    printf("%d",min);
}