#include<stdio.h>

int main(void)
{
    int size;
    int sum=0,i=0,no;
    int arr[]={0};
    
    printf("enter the array size=");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
    	printf("value=");
    	scanf("%d",&no);
    	
    	arr[i]=no;
    	
		sum+=arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}
