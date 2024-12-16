#include <stdio.h>

int main() {
int OriginalCost, inputTD;
float price, TD, SmallChange;
int centavos;
int dnomination20, dnomination10, dnomination5, dnomination1;
int centavos25, centavos10, centavos5;

    
printf("Enter the price of the item: ");
scanf("%d", &OriginalCost);
printf("Enter the tendered amount: ");
scanf("%d", &inputTD);
  
price = OriginalCost / 100.0;
TD = inputTD / 100.0;

   
SmallChange = TD - price;
printf("Item price : %.2f\n", price);
printf("Tendered amount : %.2f\n", TD);
printf("Change : %.2f\n\n", SmallChange);

    
centavos = (int)(SmallChange * 100 + 0.5); 

    
dnomination20 = centavos / 2000;
    centavos %= 2000;
dnomination10 = centavos / 1000;
    centavos %= 1000;
dnomination5 = centavos / 500;
    centavos %= 500;
dnomination1 = centavos / 100;
    centavos %= 100;
centavos25 = centavos / 25;
    centavos %= 25;
centavos10 = centavos / 10;
    centavos %= 10;
centavos5 = centavos / 5;
    centavos %= 5;

printf("Coin Denomination\n");
printf("20.00 pesos = %d\n", dnomination20); 
printf("10.00 pesos = %d\n", dnomination10);
printf("5.00 pesos  = %d\n", dnomination5);
printf("1.00 pesos  = %d\n", dnomination1);
printf("0.25 cents  = %d\n", centavos25);
printf("0.10 cents  = %d\n", centavos10);
printf("0.05 cents  = %d\n", centavos5);

    return 0;
}

