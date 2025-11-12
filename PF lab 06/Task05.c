#include <stdio.h>
int main (){
	int time,i;
	
	printf("Enter the duration of exam in minutes: ");
	scanf ("%d", &time);
	
	for(i=time; i>0;i--){
		printf ("Time left %d minutes\n", i);
	}
	printf("Times Up-Exam Submitted");
	return 0;
}
