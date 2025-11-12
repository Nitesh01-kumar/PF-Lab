#include <stdio.h>
int main (){
	int password,i;
	
	for (i=1;i<=5;i++){
		printf ("How many characters are in password: ");
		scanf ("%d", &password);
		
		if (password>5){
			printf ("Password Confirmed");
			return 0;
		}
		else if (i<5){
		printf ("Invalid password, Try again\n"); 
	    }
	}
	printf ("Account locked");
	return 0;
	
	
}
