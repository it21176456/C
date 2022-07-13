//function lesson 1
#include<stdio.h>

int z; //globle variable
float dead (int y);

int main(void)
{
	int x=5;
    printf("%.2f",dead(5));
	return 0;
}

float dead(int y)
{
	float balance;
	balance = 450-y;
	return balance;
}
