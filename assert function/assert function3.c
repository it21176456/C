#include<stdio.h>
#include<assert.h>
//function declaration
float calpayment(char package_type);
float caldiscount(int age,float payment);
void testDiscount();
int main(void)
{
	char type;
	int age;
	float payment,discount,netAmount;
	
	testDiscount();
	printf("enter the package type:");
	scanf("%c",&type);
	printf("enter the age of the patient:");
	scanf("%d",&age);
	
	payment=calpayment(type);
	discount=caldiscount(age,payment);
	netAmount=payment-discount;
	printf("payment=%.2f\n",calpayment(type));
	printf("discout=%.2f\n",caldiscount(age,payment));
	printf("net amount=%.2f",netAmount);

	return 0;
}
//function implementation
float calpayment(char package_type)
{
	if(package_type=='S')
	   return 15000;
	else if(package_type=='C')
	   return 50000;
	else if(package_type=='H')
	   return 30000;
	else 
	   return 0;   
}
float caldiscount(int age,float payment)
{
	if(age>=60)
	  return (payment*10)/100.0;
	else
	 return 0;  
}
void testDiscount()
{
	assert(caldiscount(60,15000)==1500.0);
	assert(caldiscount(23,15000)==0.0);
}
