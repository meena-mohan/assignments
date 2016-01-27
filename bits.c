#include <stdio.h>
int main(void)
{
	int n,a[10],i,c=0;
	printf("number:");
	scanf("%d\n",&n);
	while(n!=0)
	{
		a[i++]=n%2;
		n=n/2;
		c++;
	}
	printf("Number of digits:%d",c);
	return 0;
}
