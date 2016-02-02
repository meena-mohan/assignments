#include <stdio.h>
int prime(int n)
{
	 int i,j,c=0;
	 for(i=n;i<200;i++)
	 {
		for(j=2;j<i;j++)
	 	{
		 	if(i%j==0)
		 	{
		 		c=1;
		 		break;
		 	}
		}
		if(c==0)
		{
		 	break;
		}
	  c=0;
	 }
	 return i;
}
int main()
{
	int a,n;
	scanf("%d",&a);
	n=a+1;
	printf("%d",prime(n));
	return 0;
}


