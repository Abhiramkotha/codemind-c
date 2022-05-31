
#include<stdio.h>
int main()
{
    int a[100],b[100],n,j,i,p=0,y=0;
    //scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
    if(a[i]>b[i])
    {
        p++;
    }
    if(a[i]<b[i])
    {
        y++;
    }
    }
    printf("%d %d",p,y);
    return 0;
}