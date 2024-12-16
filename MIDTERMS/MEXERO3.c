#include <stdio.h>

int main() {
   
 double consumption, excess_consumption, final_bill;
 const double rate_per_kw = 50.00;
 const double adjustment_tax_rate = 0.085;
 const double threshold = 25.00;

 printf("Enter the total kilowatt-hour consumption: ");
 scanf("%lf", &consumption);

    
 if (consumption > threshold) {
     excess_consumption = consumption - threshold;
 } else {
     excess_consumption = 0;
   }

  
 final_bill = excess_consumption * rate_per_kw;
  final_bill += final_bill * adjustment_tax_rate;
   
  printf("\nTotal Consumption: %.2f kWh", consumption);
  printf("\nExcess Consumption: %.2f kWh", excess_consumption);
  printf("\nFinal Electric Bill: P%.2f\n", final_bill);

   return 0;
}

