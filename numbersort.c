#include <stdio.h>
#include<string.h>
int main(void) 
{
	char *value[]={"1", "3", "11", "100", "19", "2", "5"},*temp;
	int i,j,n;
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{   
			n=strcmp(value[i],value[j]);
			if(strlen(value[i])>strlen(value[j])||(strlen(value[i])==strlen(value[j])&&n>0))
			{
				   temp=value[i];
				   value[i]=value[j];
				   value[j]=temp;
			}
		}
	}
	for(i=0;i<7;i++)
	{
      printf("%s\t",value[i]);
	}
	return 0;
}

