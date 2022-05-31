 #include<stdio.h>
int main()
{
    int n,i,j,k=0,c,arr[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            s++;
        }
    }
    printf("%d",s);
}
