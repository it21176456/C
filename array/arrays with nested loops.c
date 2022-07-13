#include<stdio.h>
int main(void)
{
	int i,j,k,l;
	int row[3];
	
	for(j=7;j>=0;j--)
	{
		l=j;
		for(k=3;k>=1;k--)
		{
			if(l%2==0)
			{
				row[k-1]=2;
			}
			else
			{
				row[k-1]=1;
			}
			l=l/2;
		}
		printf("[");
		for(k=0;k<=2;k++)
		  printf("%i",row[k]);
		  printf("]\n");
	}
	return 0;
}

/*
[111]
[112]
[121]
[122]
[211]
[212]
[221]
[222]    */
