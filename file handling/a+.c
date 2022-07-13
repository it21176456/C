#include<stdio.h>
int main(void)
{
	FILE*fread;
	
	int ID1,ID2,a=0,c=0;
	char name1[20];
	int year1;
	
	fread=fopen("data.dat","a+");
	
	if(fread==NULL)
	{
		printf("file can't be open");
		return -1;
	}
	printf("enter ID:");
	scanf("%d",&ID2);
	
	fscanf(fread,"%d%s%d",&ID1,name1,&year1);
	while(!feof(fread))
	{
		if(ID1==ID2)
		{
			printf("repeat");
			break;
		}
		else if(ID1!=ID2)
		{
			a++;
		}
		fscanf(fread,"%d%s%d",&ID1,name1,&year1);
		c++;
	}
	if(a==c)
	{
		fprintf(fread,"\n%d",ID2);
	}
	return 0;
}
