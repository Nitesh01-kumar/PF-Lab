#include <stdio.h>
int main(){
	float temperature[7];
	int i,hotdays=0,moderatedays=0;
	
	printf("Enter the temperature(Celcius) for 7 days: \n");
	
	for(i=0;i<7;i++){
		printf("Day %d: ",i+1);
		scanf("%f", &temperature[i]);
	}
	for (i=0; i<7; i++){
		if(temperature[i]>30)
		hotdays++;
		else{
			moderatedays++;
		}
	}
	printf("No. of hotdays in week is %d\n",hotdays);
	printf("No. of moderate days in week is %d\n", moderatedays);
	return 0;
}
