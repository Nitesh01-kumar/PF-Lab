#include <stdio.h>

void inputPrices(int prices[], int *count){
    int i = 0, price;
    while(1){
        printf("Enter item price (0 to finish): ");
        scanf("%d", &price);
        if(price == 0) break;
        prices[i] = price;
        i++;
    }
    *count = i;
}

int calculateTotal(int prices[], int count){
    int total = 0, i;
    for(i=0; i<count; i++){
        total += prices[i];
    }
    return total;
}

float calculateDiscount(int total){
    float disc = 0;
    if(total > 5000){
        disc = total * 0.20;
    }
    else if(total >= 3000 && total <= 5000){
        disc = total * 0.10;
    }
    else{
        disc = 0;
    }
    return disc;
}

void displayBill(int prices[], int count, int total, float discount){
    int i;
    printf("\nItem Prices:\n");
    for(i=0; i<count; i++){
        printf("Item %d: %d\n", i+1, prices[i]);
    }
    printf("Total Purchase: %d\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", total - discount);
}

int main(){
    int prices[100];
    int itemCount = 0;
    int total;
    float discount;

    inputPrices(prices, &itemCount);
    total = calculateTotal(prices, itemCount);
    discount = calculateDiscount(total);
    displayBill(prices, itemCount, total, discount);

    return 0;
}

