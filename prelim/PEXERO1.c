#include <stdio.h>

int main () {

float discountedPrice, originalPrice;

printf("input discounted Price: ");
scanf ("%f", &discountedPrice);

originalPrice = discountedPrice / 0.85;

printf("the orginial Price is: %.2f", originalPrice);

return 0;
}

