#include<stdio.h>
#include<assert.h>

int main(void)
{
	int x;
	printf("x=");
	scanf("%d",&x);
	assert(x>=10);
	printf("x is %d",x);
	
	return 0;
}

