#include<stdio.h>
int max(int x, int y);
int main(void)
{
    int num1,num2;
	printf("enter the two integers=");
	scanf("%d%d",&num1,&num2);
	
	printf("max number =%d",max(num1,num2));
	return 0; 
}

int max(int x,int y)
{
	if(x>y)
	   return x;
	else
	   return y;   
}
