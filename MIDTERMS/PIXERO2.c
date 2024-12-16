#include <stdio.h>

int main () {

float yrds, ft, inch, meter, cm;

printf("Input the length of cloth in yards: ");
scanf("%f", &yrds);

ft = yrds * 3;

inch = ft * 12;

cm = inch * 2.54;
meter = cm / 100;

printf("Length of Feet: %.2f\n", ft);
printf("Length of inches: %.2f\n", inch);
printf("Length of meters: %.2f", meter);

return 0;
}

