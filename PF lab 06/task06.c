#include <stdio.h>
int main(){
	int totallights,i=1;
	char faultylight;
	
	printf ("Enter the total number of street lights: ");
	scanf (" %d", &totallights);
	
	while (i<=totallights){
		printf ("The %d light is faulty(Yes==y, No==n): ", i);
		scanf (" %c", &faultylight);
		
		if (faultylight=='y'){
			printf("The light is detected as faulty, Skip\n");
			i++;
		}
		else{
			printf ("The %d light is turned on \n",i);
	        i++;	
		}
		
	}
	printf ("Streetlight activation complete");
	return 0;
}
