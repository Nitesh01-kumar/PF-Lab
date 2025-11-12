#include<stdio.h>
int main (){
	int balance;
	
	printf ("Enter the available balance: ");
	scanf ("%d", &balance);
	
	while (balance>=10){
		balance=balance-10;
		printf ("%d\n", balance);
		
	}
	printf ("Recharge required");
	return 0;
	
}
