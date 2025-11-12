#include <stdio.h>
int main(){
	int floor, i;
	
	printf("Enter The floor no.: ");
	scanf("%d", &floor);
	
	if (floor<0 || floor>50){
		printf ("Floor number is invalid");
		return 0;
	}
	i=1;
	while (i<=floor){
		printf ("%d\n",i);
		i++;
	}
	printf ("You have arrived at your destination");
	return 0;
}
