#include<stdio.h>
int main(void)
{
	char arr[10];
	
	FILE*marks1;
	
	marks1=fopen("STmarks.dat","r");
	
	if(marks1==NULL)
	{
		printf("can't open the file");
		return -1;
	}
	
	fscanf(marks1,"%s",arr);//this only read the first line of the file
	
	printf( "%s\n",arr);
	
	fscanf(marks1,"%s",&arr);//this only read the seecond line of the file
	
	printf( "%s\n",arr);
	
	
	fclose(marks1);
	return 0;
}
