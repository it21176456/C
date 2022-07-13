#include<stdio.h>
#include<assert.h>
#include<math.h>

void assert1();
int findbonustime(char empcategory);
float findbonus(float salary,int nooftimes);
int main(void)
{
	char empcat;
	float salary;
	assert1();
	printf("enter salalry:");
	scanf("%f",&salary);
	
	printf("employee number:");
	scanf(" %c",&empcat);
	
	findbonustime(empcat);
	findbonus(salary,findbonustime(empcat));
	
	printf("bonus=%.2f",findbonus(salary,findbonustime(empcat)));
	return 0;
}
int findbonustime(char empcategory)
{
	
	if(empcategory==65)
	{
		return 1;
	}
	else if(empcategory==66)
	{
		return 2;
	}
	else if(67<=empcategory<=69)
	{
		return 3;
	}
	
}
float findbonus(float salary,int nooftimes)
{
	return salary*(float)nooftimes;
}
void assert1()
{
	float tolarancevalue=0.0000001;
	
	assert(findbonustime(66)==2);
	assert(fabs(findbonus(15000,2)-30000)<tolarancevalue);
	printf("pass\n");
}
