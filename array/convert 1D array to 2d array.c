#include<stdio.h>
int main(void)
{
	int r,c,a=0;
	int my1D_array[12];
	int my2D_array[4][3];
	
	
	for(r=0;r<12;r++)
	{
		scanf("%d",&my1D_array[r]);
	}
	
	for(c=0;c<3;c++)
	{
		for(r=0;r<4;r++)
		{
			my2D_array[r][c]=my1D_array[a];
			a++;
		}
	}
	
	for(r=0;r<12;r++)
	{
		printf("%d",my1D_array[r]);
	    
	}
	printf("\n \n");
	for(r=0;r<4;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",my2D_array[r][c]);
		}
		printf("\n");
	}
	return 0;
}
