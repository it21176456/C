#include<stdio.h>
int main(void)
{
	FILE*fread;
	
	int ID1;
	char name1[20];
	int year1;
	
	fread=fopen("data.dat","r");
	
	if(fread==NULL)
	{
		printf("file can't be open");
		return -1;
	}
	fscanf(fread,"%d%s%d",&ID1,name1,&year1);
	while(!feof(fread))
	{
		printf("%d %s %d\n",ID1,name1,year1);
		fscanf(fread,"%d%s%d",&ID1,name1,&year1);
		
	}
	return 0;
}
/* output
123 maleesha 2000
456 kasitha 1999
890 gimmanaeeee 1999
*/
