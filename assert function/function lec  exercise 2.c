#include<stdio.h>

void pattern(int x);

int main(void)
{
	int side;
	printf("enter the side=");
	scanf("%d",&side);
	
	pattern(side);
	
	return 0;
}
void pattern(int x)
{
	int i,a;
	for(i=1;i<=x;i++)
	{
		for(a=1;a<=x;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
