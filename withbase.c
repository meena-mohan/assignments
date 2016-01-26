#include <stdio.h>
int main(void)
{
    char a[100];
    int i=0,n,j,m,rem;
    printf("Number:");
    scanf("%d\n",&n);
    printf("Base:");
    scanf("%d\n",&m);
    while(n!=0)
    {
    	rem=n%m;
    	if(rem<10)
    	{
    		a[i++]=rem+'0';
    	}
    	else
    	{
    		a[i++]=rem+55;
    	}
    	n=n/m;
    }
    for(j=i-1;j>=0;j--)
    {
    	printf("%c",a[j]);
    }
	return 0;
}
