/* password using array
character     ascii value
'A' 			65
'Z'    			90
'a'    			97
'z'   			122
'0'    			48
'9'    			57

*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	int uppercase=0;
	int lowercase=0;
	int number=0;
	int character=0;
	char password[100];
	int i,length,a=0;
	
	printf("enter the password:");
	scanf("%s",password);
	
	length=strlen(password);
	
    for(i=0;password[i]!='\0';i++)
    {
    	if(length>10)
    	{
    		a++;
		}
		if(password[i]>=65&&password[i]<=90)
		{
			uppercase++;
		}
		if(password[i]>=97 && password[i]<=122)
		{
			lowercase++;
		}
		if(password[i]>=48&&password[i]<=57)
		{
			number++;
		}
		if(password[i]=='@'||password[i]=='$'||password[i]=='&')
		{
			character++;
		}
		
	}
	if(a>0&&uppercase>0&&lowercase>0&&number>0&&character>0)
	{
		printf("password format is correct");
	}
	else
	{
		printf("erro");
	}
   
	return 0;
}


