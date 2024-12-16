#include <stdio.h>
 
int main() {
    long long pay = 1;
    long long totalPay = 0;
    int day;
    for (day = 1; day <= 30; day++) {
        totalPay += pay;
        printf("Day %d: P%lld\n", day, pay);
        pay *= 2;
    }
 
    printf("\nTotal pay after 30 days: P%lld\n", totalPay);
    return 0;
}

