#include<stdio.h>
#define SIZE 5
int main(void)
{
	int arr[SIZE]={0};
	int i,no,maxNo;
	
	printf("enter all the numbers:");
	
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
		
		if(arr[i]>=10&&arr[i]<=100)
		{
			if(maxNo<arr[i])
			{
				maxNo=arr[i];
			}
		}
		else
		{
			--i;
			continue;
		}
	}
	printf("maximum number=%d",maxNo);
	return 0;
}




