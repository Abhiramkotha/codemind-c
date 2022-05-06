#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,x,ci,cc;
    scanf("%lf%lf%lf",&p,&r,&t);
    x=r/100.0;
    cc=pow((1+x),t);
    ci=p*cc;
    printf("%0.2lf",ci);
    return 0;
}