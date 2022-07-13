#include<stdio.h>
int main(void)
{
	char itemId[5];
	char name[10];
	int quantity;
	float unitprice;
	int count;
	float price,total=0;
	
	FILE*fpointer;
	
	fpointer=fopen("purchase.txt","w");
	
	if(fpointer==NULL)
	{
		printf("can't open the file");
		return -1;
	}
	
	for(count=0;count<4;count++)
	{
		printf("enter the item ID:");
		scanf("%s",itemId);
		
		printf("enter the name :");
		scanf("%s",name);
		
		printf("enter the quantity:");
		scanf("%d",&quantity);
		
		printf("enter the price of 1Kg:");
		scanf("%f",&unitprice);
		
		fprintf(fpointer,"%s\t%s\t%d\t%.2f\n",itemId,name,quantity,unitprice);
		
	}
	fclose(fpointer);
	
	//read a file
	
	fpointer=fopen("purchase.txt","r");
	if(fpointer==NULL)
	{
		printf("can't open the file");
		return -1;
	}
	
	printf("\n\nitem\tquantity\tunit price\tprice\n");
	
	fscanf(fpointer,"%s%s%d%f",itemId,name,&quantity,&unitprice);
	while(!feof(fpointer))
	{
		price=(float)quantity*unitprice;
		total+=price;
		printf("%s\t%d\t%.2f\t%.2f\n",name,quantity,unitprice,price);
		fscanf(fpointer,"%s%s%d%f",itemId,name,&quantity,&unitprice);
	}
	printf("total		%.2f",total);
	
	fclose(fpointer);
	return 0;
}

/*
enter the item ID:P001
enter the name :flour
enter the quantity:5
enter the price of 1Kg:100
enter the item ID:P002
enter the name :dhal
enter the quantity:2
enter the price of 1Kg:180
enter the item ID:P003
enter the name :sugar
enter the quantity:4
enter the price of 1Kg:140
enter the item ID:P004
enter the name :rice
enter the quantity:10
enter the price of 1Kg:150


item    quantity  unit price      price
flour     5       100.00        500.00
dhal      2       180.00        360.00
sugar     4       140.00        560.00
rice      10      150.00       1500.00
total                          2920.00
--------------------------------
Process exited after 46.3 seconds with return value 0
Press any key to continue . . .
*/


