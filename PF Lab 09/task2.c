#include <stdio.h>
char tasks[12][31][100]= {{{"\0"}}};
void add(){
	int month, day, i;
	char description[100];
	
	printf("Enter month number (1-12): ");
	scanf("%d", &month);
	printf("Enter day (1-31): ");
	scanf("%d", &day);
	
	printf("Enter task: ");
	getchar();
	fgets(description, 100, stdin);
	
	for(i=0;description[i] != '\0'; i++){
		if (description[i] == '\n'){
			description[i] = '\0';
			break;
		}
	}
	for (i=0;i<description[i] != 0; i++){
		tasks[month-1][day-1][i] = description[i];
	}
	tasks[month-1][day-1][i] = '\0';
	printf("Task added successfully for for %d %d\n", day, month);
	
}
void removetask(){
	int month, day;
	printf("Enter month (1-12): ");
	scanf("%d", &month);
	printf("Enter day (1-31):\n");
	scanf("%d", &day);
	
	if (tasks[month-1][day-1][0] == '\0'){
		printf("No task found");
		return;
	}
	printf("Task removed: %s\n", tasks[month-1][day-1]);
	tasks[month-1][day-1][0]='\0';
	
}
void view(){
	int m, d, found=0;
	for(m=0;m<12;m++){
		for(d=0;d<31;d++){
			if(tasks[m][d][0] != '\0'){
				printf("Month %d, Day %d: %s\n", m+1, d+1, tasks[m][d]);
				found = 1;
			}
		}
	}
	if(found=0){
		printf("No task schedule\n");
	}
}

int main (){
	int choice;
	
	while(1){
		printf(" 1. Add\n 2. Remove task\n 3. View all tsks\n 4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				add();
				break;
			case 2:
				removetask();
				break;
			case 3:
				view();
				break;
			case 4:
				return 0;
			default:
				printf("Invalid choice\n");
		}
	}
}








