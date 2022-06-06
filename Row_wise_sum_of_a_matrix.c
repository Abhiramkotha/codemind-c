#include<stdio.h>
int main()
{
    int a,b,i,j,m[100][100],sum=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        sum=0;
        for(j=0;j<b;j++)
        {
            scanf("%d",&m[i][j]);
            sum+=m[i][j];
        }
         printf("%d ",sum);
    }
    
}