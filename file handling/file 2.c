//save data of a file to another file
#include<stdio.h>
int main(void)
{
	int number;
	
	FILE*fpointer;
	FILE*fnext;
	
	fpointer=fopen("file1.dat","r");
	fnext=fopen("file2.dat","w");
	
	if(fpointer==NULL&&fnext==NULL)
	{
		printf("erro");
		return -1;
	}

	while(!feof(fpointer))
	{
		fscanf(fpointer,"%d",&number);
		fprintf(fnext,"%d\n",number); 	
	}
	
	
	/* printf("enter number:");
	scanf("%d",&number);
	
	fprintf(fpointer,"%d",number); */
	
	fclose(fpointer);
	fclose(fnext);
	
	return 0;
}
