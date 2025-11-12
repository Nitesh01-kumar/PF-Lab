#include <stdio.h>
int main(){
	int litre,costperlitre,totalcost,i;
	
	printf ("Enter the price per litre: ");
	scanf (" %d", &costperlitre);
	
	printf ("How many you liters you want to dispensed into vehicle: ");
	scanf(" %d", &litre);
	
	for (i=1;i<=litre;i++){
		printf ("Fuel dispensed %d liters\t", i);
		
		(totalcost=costperlitre*i);
		printf("Amount is Rs %d\n", totalcost);
	}
	printf ("Total %d litre fuel dispensed, Total cost is Rs %d", i, totalcost);
	return 0;
}
