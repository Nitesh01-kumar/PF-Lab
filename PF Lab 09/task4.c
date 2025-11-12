#include <stdio.h>

void inputmarks(int marks[5]){
	int i;
	
	for(i=0;i<5;i++){
		printf ("Enter the marks of %d subject (Out of 100): ", i+1);
		scanf("%d", &marks[i]);
	}
}

int calculatetotal(int marks[5]){
	int i,total=0;
	for (i=0;i<5;i++){
		total=total+marks[i];
	}
	return total;
}

float average(int total){
	float avg;
	avg = total/5.0;
	return avg;
}


char calculategrades(float average){
	char grade;
	if(average >=80){
		grade='A';
	}
	else if (average >= 70){
		grade = 'B';
	}
	else if(average >= 50){
		grade = 'C';
	}
	else {
		grade = 'F';
	}
	return grade;
}
void display(int marks[5], int total, float average, char grade){
	int i;
	for(i=0;i<5;i++){
		printf("Your marks of %d subject is %d: \n", i+1, marks[i]);
	}
	printf("Total marks are %d\n ", total);
	printf("Average marks is %.2f\n ", average);
	printf("Grade is %c\n ", grade);
}


int main(){
	int marks[5];
	int total;
	float avg;
	char grade;
	
	inputmarks(marks);
	total= calculatetotal(marks);
	avg = average(total);
	grade = calculategrades(avg);
	display(marks,total, avg, grade);
	return 0;
	
}
