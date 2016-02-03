#include <stdio.h>
int main(void)
{
  	int n;
	  float a,b;
	  scanf("%d",&n);
	  a=n;
	  b=1;
	  while(a-b>0)
	  {
	    	a=(a+b)/2;
	  	  b=n/a;
    }
	  printf("square root of %d is %f",n,a);
	  return 0;
}
