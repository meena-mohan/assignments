#include <stdio.h>
int c1;
int palin(int r)
{       
	    int d,s=0;
	    c1=r;
		while(r>0)
		{
	     	d=r%10;
		    s=(s*10)+d;
		    r=r/10;
		}
		if(s==c1)
		{
			c1=1;
		}
		else
		{
			c1=0;
		}
		return c1;
}
int main(void) 
{
	int n,i,r,c;
	scanf("%d",&n);
	c=n+1;
	for(i=c;;i++)
	{
		  r=i;
	    palin(r);
		  if(c1==1)
		 {
        printf("%d",i);
		   	break;
		 }
	}
	return 0;
}
