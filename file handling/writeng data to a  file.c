//writing data to a file
#include<stdio.h>
int main(void)
{
	int number;
	
	FILE*marks;
	
	marks=fopen("STmarks.dat","w");
	
	if(marks==NULL)
	{
		printf("can't open the file");
		return -1;
		
	}
	
	
	
	printf("enter the year:");
	scanf("%d",&number);

	fprintf(marks,"maleesha=%d\n",number);
	fprintf(marks,"shehara=80%\n");
	
	fclose(marks);
	
	return 0;
	
}

