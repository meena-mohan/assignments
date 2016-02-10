#include <stdio.h>
int main(void)
{
	 char a[20],b[20];
   int i,j,c,n,n1=0;
   scanf("%d",&n);
   scanf("%s",&a);
	 n1++;
	 b[0]=a[0];
	 for(i=0;i<n;i++)
	 {
	    c=0;
	    for(j=0;j<n1;j++)
	    {
	  	    if(a[i]==b[j])
	  	    {
	  	 	     c=1;
	  	 	     break;
	  	    }
	    }
	    if(c==0)
	    {
	  	   b[n1]=a[i];
	  	   n1++;
	    }
	 }
	 b[n1]='\0';
	 printf("%s",b);
 	 printf("%d",n1);
	 return 0;
}
