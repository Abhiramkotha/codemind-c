 #include<stdio.h>
int main()
{
    int i,k,sum=0,n,arr[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]==k)
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}
