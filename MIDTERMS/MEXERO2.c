#include <stdio.h>

int main() {
    
double weekly_sales, commission, gross_pay;
const double regular_pay = 1000.00; 
const double commission_rate = 0.097; 

    
printf("Enter the total weekly sales in pesos: ");
scanf("%lf", &weekly_sales);

    
if (weekly_sales > 5000.00) {
        
   commission = weekly_sales * commission_rate;
} else {
        
  commission = 250.00;
 }

    
 gross_pay = regular_pay + commission;

    
 printf("\nRegular Pay: P%.2f", regular_pay);
 printf("\nWeekly Sales: P%.2f", weekly_sales);
 printf("\nWeekly Commission: P%.2f", commission);
 printf("\nWeekly Gross Pay: P%.2f\n", gross_pay);

    return 0;
}

