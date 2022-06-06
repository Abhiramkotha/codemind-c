#include<stdio.h>
int main()
{
    int a,b,i,j,c[100][100],sum=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        sum=0;
        for(j=0;j<a;j++)
        {
            sum+=c[j][i];
        }
         printf("%d ",sum);
    }
    
}