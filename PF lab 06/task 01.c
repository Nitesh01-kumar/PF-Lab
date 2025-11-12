#include <stdio.h>
int main(){
	char suspicious;
	int i;
	int n;
	
	printf("How many bags you have? ");
	scanf ("%d",&n);
	

	
	
	for (i=0;i<n;i++){
		
		printf ("the bag contains suspicious items(y/n): )");
	    scanf (" %c", &suspicious);
		printf ("Scanning bag\n");
		if (suspicious=='y'){
			printf ("Your bag contain suspicious item");
			return 0;
		}
	}
	if (i==n){
	printf ("Your bags scanned successfuly");
	}
	return 0;
	
}

