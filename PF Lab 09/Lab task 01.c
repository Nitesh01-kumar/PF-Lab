#include <stdio.h>

#define MAX_ITEMS 10
#define NAME_LEN 20

char items[MAX_ITEMS][NAME_LEN];
int prices[MAX_ITEMS];
int itemCount=0;

int same(char a[], char b[]){
	int i=0;
	while (a[i] !='\0' && b[i] != '\0'){
		if(a[i] != b[i]) 
		return 0;
		i++;
	}
	if (a[i] == '\0' && b[i] == '\0'){
		return 1;
	}
	return 0;
}

void addItems(){
	int i;
	if(itemCount==MAX_ITEMS){
		printf("Store Full, Cannot add more items\n");
		return;
	}
	printf("Enter the item name: ");
	scanf("%19s", items[itemCount]);
	
	for(i=0;i<itemCount;i++){
		if(same(items[i], items[itemCount])){
			printf("Already exists\n");
			return;
		}
	}
	printf("Enter the price in RS: ");
	scanf("%d", &prices[itemCount]);
	itemCount++;
	printf("Item added successfully\n");
}
void showlist(){
	int i;
	if(itemCount ==0){
		printf("No items available\n");
		return;
	}
	for(i=0;i<itemCount;i++){
		printf("%d. %s\n", i+1, items[i]);
	}
}

void editprice(){
	int i;
	if(itemCount == 0){
		printf("No item available\n");
		return;
	}
	char name[NAME_LEN];
	printf("Enter item name to edit: \n");
	scanf("%19s", name);
	for(i=0;i<itemCount;i++){
		if(same(items[i], name)){
			printf("old price of %s = Rs %d\n", items[i], prices[i]);
			printf("Enter new price: ");
			scanf("%d", &prices[i]);
			printf("Price updates\n");
			return;
		}
	}
	printf("Item not found\n");
}

void viewAll(){
	int i;
	
	if (itemCount==0){
		printf("No items available \n");
		return;
	}
	for(i=0;i<itemCount;i++){
		printf("%s Rs:%d\n", items[i], prices[i]);
		
	}
}

void receipt() {
    int i, qty, subtotal = 0;
    char buy[NAME_LEN];
    printf("Type item name to proceed or type 'end' to finish:\n");

    while (1) {
        printf("Item name: ");
        scanf("%19s", buy);

        if (same(buy, "end")) {
            break; 
        }

        int found = 0;
        for (i = 0; i < itemCount; i++) {
            if (same(items[i], buy)) {
                printf("Quantity: ");
                scanf("%d", &qty);
                subtotal += prices[i] * qty;
                printf("Added: %s x %d = Rs %d\n", items[i], qty, prices[i] * qty);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("Item not found\n");
        }
    }

    printf("\nSubtotal = Rs %d\n", subtotal);

    if (subtotal > 5000) {
        int discount = subtotal / 10;
        printf("Discount (10%%) = Rs %d\n", discount);
        subtotal -= discount;
    }

    printf("Total to pay = Rs %d\n", subtotal);
}

int main(){
	int choice;
	while(1){
		printf("\n1. Add Item\n2. Show Item List\n3. Edit Item Price\n4. View All Items & Prices\n5. Generate Receipt\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
		switch(choice){
			printf("1. Add Item\n2. Show Item List\n3. Edit Item Price\n4. View All Items & Prices\n5. Generate Receipt\n6. Exit\n");
	        printf("Enter choice: ");
	        scanf("%d", &choice);
	        case 1:
	        	addItems();
	        	break;
	        case 2:
	        	showlist();
	        	break;
	        case 3:
	        	editprice();
	        	break;
	        case 4:
	        	viewAll();
	        	break;
	        case 5:
	        	receipt();
	        	break;
	        case 6:
	        	printf("Exit from menu");
	        	return 0;
	        default:
				printf("Invalid choice\n");
		}
	}
	return 0;
}













