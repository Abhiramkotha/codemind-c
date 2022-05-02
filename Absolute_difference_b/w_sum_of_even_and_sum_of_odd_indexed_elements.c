#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],i,n,sum=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+arr[i];
             
        }
        else
        {
            s=s+arr[i];
        }
        
    }
    printf("%d",abs(sum-s));
     
}    