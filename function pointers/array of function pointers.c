#include<stdio.h>
int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
int divide(int num1,int num2);
int main(void)
{
	int x,y,choice,result;
	
	printf("enter the two numbers:");
	scanf("%d%d",&x,&y);
	
	printf("enter choice(1(+),2(-),3(*),4(/)):");
	scanf("%d",&choice);
	
	int (*ptr[4])(int,int);
	
	ptr[0]=add;
	ptr[1]=subtract;
	ptr[2]=multiply;
	ptr[3]=divide;
	
	result=ptr[choice](x,y);
	
	printf("result: %d",result);
}
int add(int num1,int num2)
{
	return (num1+num2);
}
int subtract(int num1,int num2)
{
	return (num1-num2);
}
int multiply(int num1,int num2)
{
	return (num1*num2);
}
int divide(int num1,int num2)
{
	return (num1/num2);
}
