#include <stdio.h>

void menu(){
	printf("1. Burger - Rs. 500\n");
    printf("2. Pizza - Rs. 800\n");
    printf("3. Pasta - Rs. 700\n");
    printf("4. Sandwich - Rs. 300\n");
    printf("5. Fries - Rs. 200\n");
    printf("6. End\n");
}

void order(int orderedItems[5]){
	int items, qty;
	while(1){
		printf("Enter item number: ");
		scanf("%d", &items);
		if (items == 6) break;
		printf("Enter quantity: ");
		scanf("%d", &qty);
		orderedItems[items-1]+= qty;
	}
}

int calculate(int orderedItems[5], int prices[5]){
	int total=0, i;
	for(i=0;i<5;i++){
		total+= orderedItems[i]*prices[i];
	}
	return total;
}

float discount(int total){
	float disc = 0;
	if(total>2000){
		disc= total*0.10;
	}
	return disc;
}

void printBill(int orderedItems[5], int prices[5], int total, float discount){
	
	printf("Item\tQuantity\tPrice\n");
	int i,cost;
	for(i=0;i<5;i++){
		cost= orderedItems[i]*prices[i];
		printf("%d\t%d\t%d\n", i+1, orderedItems[i], prices[i]);
		
	}
	printf("Total bill is %d\n", total);
	printf("Discount is %.2f\n", discount);
	printf("Your net amount to pay is %.2f\n", total-discount);
	
}
int main() {
    char *items[5] = {"Burger", "Pizza", "Pasta", "Sandwich", "Fries"};
    int prices[5] = {500, 800, 700, 300, 200};
    int orderedItems[5] = {0, 0, 0, 0, 0};
    int choice;
    int total;
    float disc;

    do {
        printf("1. Show Menu\n");
        printf("2. Place Order\n");
        printf("3. Print Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                menu();
                break;
            case 2:
                order(orderedItems);
                break;
            case 3: {
                total = calculate(orderedItems, prices);
                disc = discount(total);
                printBill(orderedItems, prices, total, disc);
                break;
            }
            case 4:
                printf("Thank you for visiting!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}


