#include <stdio.h>
 
void helloWorld() {
    printf("Hello World!!!\n");
}
 
void displayMessage(int i) {
    int x;
    for (x = 1; x <= i; x++) {
     printf("\n[%d] Hello UC!!", x);
  }
}
 
int displaySum() {
return 5 + 10;
}
 
int displayProduct(int n1, int n2) {
    int i, P = 0;
    for (i = 1; i <= n1; i++) {
    P += n2;
 
}
return P;
}
 
int main() {
    int sum, P;
    helloWorld();
    displayMessage(100);
    sum = displaySum();
    printf("\nSum: %d\n", sum);
 
    P = displayProduct(5, 3);
    printf("Product: %d\n", P);
 
    return 0;
}

