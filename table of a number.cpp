#include<stdio.h>
main()
{
	int n,i=1;
	printf("enter the number: ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf(" %d * %2d = %5d \n",n,i,n*i);
		i++;
	}
	
}
