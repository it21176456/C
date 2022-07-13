#include<stdio.h>
void say_hello(int num_of_times);
int main(void)
{
	void(*funptr)(int);
	funptr=say_hello;
	funptr(10);
	
	
 	
	return 0;
}
void say_hello(int num_of_times)
{
	int k;
	for(k=0;k<num_of_times;k++)
	{
		printf("hello\n");
	}
}
