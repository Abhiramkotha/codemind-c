#include<stdio.h>
int main()
{
    int i,j,n,a[200],co=0;
    float s=0,c=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        co=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                co++;
            }
        }
        if(a[i]==co)
        {
            s+=a[i];c++;
            a[i]=0;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        avg=s/c;
        printf("%.2f",avg);
    }
}