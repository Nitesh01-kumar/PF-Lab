#include <stdio.h>

void inputRatings(int movieRatings[5][3], int viewers){
    int movie, v;
    for(movie=0; movie<5; movie++){
        printf("Enter ratings for Movie %d:\n", movie+1);
        for(v=0; v<viewers; v++){
            printf("Viewer %d rating (1-10): ", v+1);
            scanf("%d", &movieRatings[movie][v]);
            if(movieRatings[movie][v] < 1) movieRatings[movie][v] = 1;
            if(movieRatings[movie][v] > 10) movieRatings[movie][v] = 10;
        }
    }
}

float calculateAverage(int ratings[], int viewers){
    int i, sum = 0;
    for(i=0; i<viewers; i++){
        sum += ratings[i];
    }
    return sum / (float)viewers;
}

int classifyMovie(float average){
    if(average >= 9) return 1; // Excellent
    else if(average >= 7) return 2; // Good
    else if(average >= 5) return 3; // Average
    else return 4; // Poor
}

void displaySummary(int movieRatings[5][3], int viewers, char movieNames[5][20]){
    int movie, category;
    char categoryNames[4][20] = {"Excellent", "Good", "Average", "Poor"};

    printf("\nMovie Ratings Summary:\n");
    printf("Movie\tAverage\tCategory\n");
    for(movie=0; movie<5; movie++){
        float avg = calculateAverage(movieRatings[movie], viewers);
        category = classifyMovie(avg);
        printf("%s\t%.2f\t%s\n", movieNames[movie], avg, categoryNames[category-1]);
    }
}

int main(){
    char movieNames[5][20] = {"Movie A", "Movie B", "Movie C", "Movie D", "Movie E"};
    int movieRatings[5][3];
    int viewers = 3;

    inputRatings(movieRatings, viewers);
    displaySummary(movieRatings, viewers, movieNames);

    return 0;
}

