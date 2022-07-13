#include<stdio.h>
//struct with array
//in this code book details are saved to arra called book

struct books
{
	char bookId[5];
	char title[10];
	int noOfCopies;
	int noOfReaders;
};

int main(void)
{
	struct books book[3];
	int i,a;
	int readers;
	
	
	for(i=0;i<3;i++)
	{
		printf("enter the book Id:");
		scanf("%s",&book[i].bookId);
		
		printf("enter the book title:");
		scanf("%s",&book[i].title);
		
		printf("no of copies:");
		scanf("%d",&book[i].noOfCopies);
		
		printf("no of readers:");
		scanf("%d",&book[i].noOfReaders);
	}
	
	for(i=0;i<3;i++)
	{
		if(readers<book[i].noOfReaders)
		{
			readers=book[i].noOfReaders;
			a=i;
		}
	}
	
	printf("book name:%s\nnumber of readers:%d",book[a].title,readers);
	
	return 0;
}
