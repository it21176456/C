#include<stdio.h>
#include<assert.h>
void test_grade();
char grade(int marks);
int main(void)
{
	
	int marks;
	test_grade();
	printf("enter the marks=");
	scanf("%d",&marks);
	
	printf("grade=%c",grade(marks));
	return 0;
}
char grade(int marks)
{
	char result;
	
    if(marks<0)
      result='X';
      
    else if(marks<40)
	  result='F';
	else if(marks<60)
	 result='C';
	else if(marks<75)
	result='B';
	else if(marks<=100)
	result='A';
	else
	result='X';
	
	   
	   
	
	
	return result;
}
void test_grade()
{
	assert(grade(20)=='F');
	assert(grade(50)=='C');
	assert(grade(70)=='B');
	assert(grade(78)=='A');
	assert(grade(-10)=='X');
	assert(grade(110)=='X');
	//boundary conditions
	assert(grade(0)=='F');
	assert(grade(40)=='C');
	assert(grade(60)=='B');
	assert(grade(75)=='A');
	assert(grade(100)=='A');
	printf("grade()unit test passed\n");
}

