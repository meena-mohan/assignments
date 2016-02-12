#include <stdio.h>
struct stud
{
	char names[20];
	int sno;
	int marks[5];
}*s;
void avgmarks(int n,float avg[])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			avg[j]=s[i].marks[j];
		}
	}
	for(j=0;j<5;j++)
	{
		avg[j]=avg[j]/n;
	}
}
void highestmarks(int n,char maximum[])
{
  int i;
  for(j=0;j<5;j++)
  {
       if(s[maximum[j]].marks[j]<s[i].marks[j])
       {
	        maximum[j]=i;
       }
  }
}
int main()
{
	int i,j,n=0;
	float avg[5]={0};
	char maximum[5]={0};
	char ch,heading[20];
	FILE *fp;
	fp=fopen("result1.csv","r");

	if (fp == NULL)
	{
		printf("File not found");
		return 0;
	}
	else
	{
		do
	  {
			     ch = fgetc(fp);
		       if (ch == '\n')
		       { 
		          n++;
		       }

		}while(ch!=EOF);
	}

	s = (struct stud*) malloc((n)*sizeof(struct stud));
	fseek(fp,0L,SEEK_SET);

	for(i=0;i<7;i++)
	{
		fscanf(fp,"%[^,],",heading[i]);
	}
	fscanf(fp,"%[^\n]",heading[i]);

	for(i=0;i<n;i++)
	{
		fscanf(fp, "%d,%[^,],%d,%d,%d,%d,%d",&s[i].sno,s[i].names,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4]);
	}
	avgmarks(n,avg);
	highestmarks(n,maximum);
	for(i=0;i<5;i++)
	{
	   printf("%2f",avg[i]);
	}
	for(i=0;i<5;i++)
	{
	  printf("%s",s[maximum[i]].names);
	}

	return 0;
}
