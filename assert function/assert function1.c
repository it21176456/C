#include<stdio.h>
#include<assert.h>
char findGrade(float mark);
void testGrade();
int main(void)
{
	testGrade();
	float mark;
	
	printf("enter mark of the module:");
	scanf("%f",&mark);
	

	
	printf("grade=%c\n",findGrade(mark));
	return 0;
}
char findGrade(float mark)
{
	if(mark>=75&&mark<=100)
	    return 'A';
	else if(mark>=65&&mark<75)
	    return 'B';
	else if(mark>=45&&mark<65)
	    return 'C';
	else if(mark>=0&&mark<45)
	    return 'F';	
	else
	    return 'X';//erro    
		
		    
}
void testGrade()
{
    assert(findGrade(85)=='A');
	assert(findGrade(25)=='F');	
	assert(findGrade(-2)=='X');
	assert(findGrade(200)=='X');
    printf("mark() unit test passed\n");
}
