//display the maximum rainfall 
#include<stdio.h>
int main(void)
{
	float data[12];
	char month[12][100]={ {"january"} , {"february"} , {"march"} , {"april"} , {"may"} , {"june"} , {"july"} , {"august"} , {"september"} , {"october"} , {"november"} , {"december"}};
	float maxRainfall,minRainfall;
	int r;
	
	for(r=0;r<12;r++)
	{
	    printf("enter the monthly average rainfall in %s: ",month[r]);
	    scanf("%f",&data[r]);
    }
    maxRainfall=data[0];
    minRainfall=data[0];
    for(r=0;r<12;r++)
    {
    	 if(maxRainfall<=data[r])
	    {
	    	maxRainfall=data[r];
		}
		
		 if(minRainfall>=data[r])
		{
			minRainfall=data[r];
		}
	}
	for(r=0;r<12;r++)
	{
		if(maxRainfall==data[r])
		{
			printf("\n%s has the maximum rain fall\n",month[r]);
		}
	}
	for(r=0;r<12;r++)
	{
		if(minRainfall==data[r])
		{
			printf("%s has the minimum rain fall\n",month[r]);
		}
	}
	return 0;
}
/*
enter the monthly average rainfall in january: 5.2
enter the monthly average rainfall in february: 9.6
enter the monthly average rainfall in march: 1.3
enter the monthly average rainfall in april: 4.5
enter the monthly average rainfall in may: 7.8
enter the monthly average rainfall in june: 0.9
enter the monthly average rainfall in july: 0.3
enter the monthly average rainfall in august: 1.6
enter the monthly average rainfall in september: 4.9
enter the monthly average rainfall in october: 5.5
enter the monthly average rainfall in november: 7.9
enter the monthly average rainfall in december: 1.6

february has the maximum rain fall
july has the minimum rain fall                  */
