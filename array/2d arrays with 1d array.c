#include<stdio.h>
int main(void)
{
	float temp_array[2][3];
	int r,c,count;
	float avgTemp_array[2];
	
	
	for(r=0;r<=1;r++)
	{
		if(r==0)
		{
			for(c=0;c<=2;c++)
		    {
		    	if(c==0)
		       {
		       	printf("enter the morning tempreture of the colombo city:");
		        scanf("%f",&temp_array[r][c]);
			   }
		       else if(c==1)
		       {
		       	printf("enter the noon tempreture of the colombo city:");
		       scanf("%f",&temp_array[r][c]);
			   }
		       else if(c==2)
		      {
		      	 printf("enter the evening tempreture of the colombo city:");
		         scanf("%f",&temp_array[r][c]);
		       
			  }
		       avgTemp_array[r]+=temp_array[r][c]/3.0;
			}
		}
		if(r==1)
		{
			for(c=0;c<=2;c++)
		    {
			   if(c==0)
		       {
		       	printf("enter the morning tempreture of the kandy city:");
		       scanf("%f",&temp_array[r][c]);
			   }
		       
		       else if(c==1)
		       {
		       	printf("enter the noon tempreture of the kandy city:");
		       scanf("%f",&temp_array[r][c]);
		       
			   }
		       else 
		       {
		       	printf("enter the evening tempreture of the kandy city:");
		       scanf("%f",&temp_array[r][c]);
			   }
		       
		       avgTemp_array[r]+=temp_array[r][c]/3.0;
		    }
		}
	}
	
	for(r=0;r<=1;r++)
	{
		if(r==0)
		{
				printf("\naverage tempreture of colombo city is:%.1f\n",avgTemp_array[r]);
		}
	
		else if(r==1)
		{
				printf("average tempreture of kandy city is:%.1f",avgTemp_array[r]);
		}
         	
	}
	
	return 0;
}
/*

enter the morning tempreture of the colombo city:29.1
enter the noon tempreture of the colombo city:32.6
enter the evening tempreture of the colombo city:31.3
enter the morning tempreture of the kandy city:27.8
enter the noon tempreture of the kandy city:30.2
enter the evening tempreture of the kandy city:28.4

average tempreture of colombo city is:31.0
average tempreture of kandy city is:28.8


*/
