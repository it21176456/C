#include<stdio.h>
int main(void)
{
	int r,c,a=0;
	int my1D_array[12];
	int my2D_array[3][4];
	
	
	for(r=0;r<12;r++)
	{
		scanf("%d",&my1D_array[r]);
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			my2D_array[r][c]=my1D_array[a];
			++a;
		}
	}
	
	for(r=0;r<12;r++)
	{
		printf("%d",my1D_array[r]);
	    
	}
	printf("\n \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			printf("%d",my2D_array[r][c]);
		}
		printf("\n");
	}
	return 0;
}

/*output
1
2
3
4
5
6
7
8
9
0
1
2
123456789012

1234
5678
9012    */
