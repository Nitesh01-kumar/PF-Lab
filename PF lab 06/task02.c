#include <stdio.h>
int main (){
	int days,i, fine=0;
	
	printf ("How many days you are late? ");
	scanf ("%d", &days);
	
	for (i=1; i<=days; i++){
		fine=fine+(i*5);
	}
	printf ("Total fine to paid is RS %d\n", fine);
	return 0;
	
}
