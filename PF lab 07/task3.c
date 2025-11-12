#include <stdio.h>
int main(){
	int stock[8];
	int i;
	
	printf("Enter the quantity of 8 products: \n");
	for(i=0; i<8; i++){
		printf("Product %d: ",i+1);
		scanf("%d",&stock[i]);
	}
	
	for(i=0; i<8; i++){
		if(stock[i]<0){
			stock[i]=0;
		}
	}
	printf("\nCorrected Stock Quantities\n");
	for(i=0; i<8; i++){
		printf("Product %d: %d\n", i+1, stock[i]);
	}
	return 0;
}
