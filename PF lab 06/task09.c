#include <stdio.h>
int main(){
	int compartments,i,passengers,total=0;
	
	printf ("How Many compartments are? ");
	scanf ("%d", &compartments);
	
	for (i=1;i<=compartments;i++){
		printf ("How many passengers in %d Compartment?",i);
		scanf ("%d", &passengers);
		if(passengers==0){
			printf ("The %d compartment is empty\n",i);
		}
		else if (passengers>=10){
			printf ("The %d compartment is full\n",i);
		}
		else printf("%d passengers in compartment %d\n",passengers,i);
		total=total+passengers;
	}
	printf ("total passengers in train are %d\n",total);
	return 0;
}
