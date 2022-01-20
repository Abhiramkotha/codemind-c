#include<stdio.h>
main()
{
	float f=42,c;
	
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("%.2f",c);
}