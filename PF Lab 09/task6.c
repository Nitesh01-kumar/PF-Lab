#include <stdio.h>

void inputCalories(int weekCalories[7]){
	int day;
    for(day=0; day<7; day++){
        printf("Enter calories burned on Day %d: ", day+1);
        scanf("%d", &weekCalories[day]);
    }
}

int totalCalories(int weekCalories[7]){
    int day,total = 0;
    for(day=0; day<7; day++){
        total += weekCalories[day];
    }
    return total;
}

float averageCalories(int total){
    return total / 7.0;
}

int mostActiveDay(int weekCalories[7]){
    int day, maxDay = 0;
    for(day=1; day<7; day++){
        if(weekCalories[day] > weekCalories[maxDay]){
            maxDay = day;
        }
    }
    return maxDay;
}

void displayFeedback(float average){
    if(average >= 500){
        printf("Excellent Progress\n");
    }
    else if(average >= 300){
        printf("Good Effort\n");
    }
    else{
        printf("Needs Improvement\n");
    }
}

void displayResults(int weekCalories[7], int total, float average, int activeDay){
    printf("\nCalories Burned Each Day:\n");
    int day;
	for(day=0; day<7; day++){
        printf("Day %d: %d\n", day+1, weekCalories[day]);
    }
    printf("Total Calories: %d\n", total);
    printf("Average Calories: %.2f\n", average);
    printf("Most Active Day: Day %d\n", activeDay+1);
    displayFeedback(average);
}

int main(){
    int weekCalories[7];
    inputCalories(weekCalories);
    int total = totalCalories(weekCalories);
    float average = averageCalories(total);
    int activeDay = mostActiveDay(weekCalories);
    displayResults(weekCalories, total, average, activeDay);
    return 0;
}

