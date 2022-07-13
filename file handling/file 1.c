#include<stdio.h>
int main(void)
{
	int number;
	
	FILE*fpointer;
	
	fpointer=fopen("file1.dat","w");
	
	if(fpointer==NULL)
	{
		printf("erro");
		return -1;
	}
	
	
	printf("number1:");
	scanf("%d",&number);
	
	fprintf(fpointer,"%d\n",number);
	
	printf("number2:");
	scanf("%d",&number);
	
	fprintf(fpointer,"%d",number);
	
	fclose(fpointer);
	
	return 0;
	
	
}
