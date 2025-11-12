#include <stdio.h>
int main(){
	int fuel;
	float stages;
	printf ("How many stages of fuel: ");
	scanf ("%f", &stages);
	
	while (stages>=1){
		stages=stages-1;
		fuel=stages*100;
		printf ("Stage completed, The %d litre fuel remianing\n ", fuel);
    }
    printf("Final stage Reached");
    return 0;
}
