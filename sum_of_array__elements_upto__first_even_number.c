 #include<stdio.h>
int main()
{
    int i,sum=0,n,arr[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            break;
        }
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
