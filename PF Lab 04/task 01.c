#include <stdio.h>
#include <string.h>
int main (){
	int age;
	char name[20]; 
	char priority, condition;
	
	printf ("Enter your name: ");
	scanf ("%s", name);
	
	printf ("Enter your age: ");
	scanf ("%d", &age);
	
	printf ("Enter the patient condition (c=Critical, m=moderate or l=mild): ");
	scanf (" %c", &condition);
	
	if (age<12 || age>65){
		priority= 'H';
	}
	else if (condition=='c'){
		priority= 'H';
	}
	else if (condition== 'm'){
		priority= 'M'; 
	}
	else if (condition== 'l'){
		priority= 'L';
	}
	printf ("The name %s and age %d have ", name, age);
	if (condition=='c'){
		printf (" Critical condition \n");
	}
	else if (condition=='m'){
		printf (" Moderate condition");
	}
	else printf (" Mild condition");
	if (priority=='H'){
		printf ("\nAssigned High priority card");
	}
	else if (priority=='M'){
		printf ("\nAssigned Medium priority cardd");
	}
	else printf ("\nAssigned Low priority card");
	return 0;
}
