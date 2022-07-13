#include<stdio.h>
#include<assert.h>
#include<math.h>
float calMark(float final,float CA);
int main(void)
{
	float markfinal,markCA;
	
	assert(fabs(calMark(100.0,100.0)-100.0)==0.0);
	assert(fabs(calMark(60.0,70.0)-64.0)==0.0);
	printf("enter mark for final exam:");
	scanf("%f",&markfinal);
	
	printf("enter mark for CA exam:");
	scanf("%f",&markCA);
	
	printf("overall mark=%.2f\n",calMark(markfinal,markCA));
	
	return 0;
}
float calMark(float final,float CA)
{
	float mark1,mark2,overallmark;
	
	mark1=final*60/100.0;
	mark2=CA*40/100.0;
	
	overallmark=mark1+mark2;
	
	return overallmark;
}
