#include <stdio.h>
int main (){
	int fan, ac, refrigrator;
	
	printf ("Enter the threshold of fan (KWH): ");
	scanf ("%d", &fan);
	
	printf ("Enter the threshold of air conditioner (KWH): ");
	scanf (" %d", &ac);
	
	printf ("Enter the threshold of refrigrator: ");
	scanf (" %d", &refrigrator);
	
	if (fan>10){
		printf("Fan as high cosumption device than daily limit");
		if (ac>10){
			printf ("\nAc as high consumption device than daily limit");
			if (refrigrator>10){
				printf ("\nRefrigrator as high consumption than daily limit");
			}
		}
	}
	printf ("\nfan with %d KWH threshold\n AC with %d KWH threshold\n Refrigrator with %d threshold", fan, ac, refrigrator);
    return 0;
	
}
