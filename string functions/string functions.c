#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[]="morning";
	char str2[]="monster";
	
	
//	printf("length of str1: %d\n",strlen(str1));//7
	
//	printf("%s\n",strcat(str1,str2));//morningmonster
	
/*	printf("%s\n",strcpy(str1,str2));    //replace str1 to str2 data
	printf("new str1:%s\n",str1);   */   //monster 
	
/*	printf("%s\n",strcpy(str2,str1));  //replace str2 to str1 data
    printf("new str2:%s\n",str2);  */ //morning
    
//  printf("%s",strncpy(str1,str2,4));  //monsing   (past the first 4 characters of str2 to str1

//	printf("%s",strncat(str2,str1,4)); //monstermorn (past the first 4 character of the str1 to end of the str2)
 	
// 	printf("%d",strcmp(str1,str2));//1  (return 0 when str1=str2, returns 1 when str1!=str2)
 	
// 	printf("%d",strncmp(str1,str2,2));//0  (retuns 0 when first charcaters of str1 = first letters of str2 else returns 1)
 	

 	
	return 0;
}


