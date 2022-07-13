#include<stdio.h>
#include<assert.h>
#include<math.h>
void testCase();
float calculation(float no1,float no2);
int main(void)
{
	testCase();
	
	float output;
	
	output=calculation(1,0.1);
	return 0;
}

void testCase()
{
	float tolaranceValue=0.000001;
	
	assert(fabs(calculation(2,0.3) - 1.7) < tolaranceValue);
	
    printf("test pass");	
}

float calculation(float no1, float no2)
{
	return no1-no2;
}


