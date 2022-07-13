#include<stdio.h>
#include<assert.h>

int main(void)
{
	int x,y;
	printf("input two integers=");
	scanf("%d%d",&x,&y);
	assert(y!=0);
	printf("valu is %.2f",x/(float)y);
	
	return 0;
}

