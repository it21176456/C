#include<stdio.h>
int main(void)
{
	int ID;
	char name[20];
	int year;
	int i;
	
	FILE*fpointer;
	
	fpointer=fopen("data.dat","w");
	if(fpointer==NULL)
	{
		printf("can't open file");
		return -1;
	}
	
	for(i=0;i<3;i++)
	{
		printf("enter the id:");
		scanf("%d",&ID);
		printf("enter the name:");
		scanf("%s",name);
		printf("enter the year:");
		scanf("%d",&year);
		
		fprintf(fpointer,"%d %s %d\n",ID,name,year);
		
	}
	fclose(fpointer);
	return 0;
	
	
}
