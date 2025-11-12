#include <stdio.h>
int main (){
	int course;
	char timeslots,prerequisties;
	
	printf ("Enter the number of course you want: ");
	scanf ("%d", &course);
	
	printf ("Have you any clash timeslots (Yess=Y, No=N)");
	scanf (" %c", &timeslots);
	
	printf ("Prerequisties (Passed certain subjects y/n): ");
	scanf (" %c", &prerequisties);
	
	if (course>5){
		printf ("Registration invalid, Exceed course limit");
	}
	else if (timeslots=='y' || timeslots=='Y'){
		printf ("Registration invalid, time clashes");
	}
	else if (prerequisties=='n' || prerequisties=='N'){
		printf ("Registration invalid, missing prerequisties");
	}
	else printf ("You are valid to register");
	return 0;
}
