#include <stdio.h>
int main(void) 
{
  	char *place1[]={"one","two","three","four","five","six","seven","eight","nine"};
  	char *place2[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  	char *place3[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
  	int n,k,m,b;
  	scanf("%d",&n);
  	k=n;

  	if(k>20&&k<=99)
        {   
	  	m=k/10;
	  	k=k%10;
  		if(k==0)
	  	{
		      printf("%s\n",place3[m-2]);
	        }
	  	else
	  	{
                      printf("%s %s\n",place3[m-2],place1[k-1]);
	  	}
  	}
  	else if(k>9&&k<20)
  	{
	    	m=k%10;
                printf("%s\n",place2[m]);
  	}
  	else if(k<9)
  	{
	    	printf("%s",place1[k-1]);
  	}
  	else if(k>99&&k<1000)
        {
	    	m=k/100;
	    	k=k%100;
	    	if(k==0)
		    {
		      	printf("%s hundred\n",place1[m-1]);
		    }
		    else
		    {   
		      	b=k/10;
		      	k=k%10;
		      	if(k!=0)
		      	{
		             printf("%s hundred and %s %s\n",place1[m-1],place3[b-2],place1[k-1]);
                        }
		      	else
		      	{
		             printf("%s hundred and %s\n",place1[m-1],place3[b-2]);
		        }
		    }
  	}
  	return 0;
}

