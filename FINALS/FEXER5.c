#include <stdio.h>

double convertMeters(double yards);
double convertFeet(double yards);
double convertInches(double yards);
double convertCenti(double yards);

int main() {
    double yards;

    printf("Enter the length in yards: ");
    scanf("%lf", &yards);

    printf("Length in meters: %.2f\n", convertMeters(yards));
    printf("Length in feet: %.2f\n", convertFeet(yards));
    printf("Length in inches: %.2f\n", convertInches(yards));
    printf("Length in centimeters: %.2f\n", convertCenti(yards));

    return 0;
}

double convertMeters(double yards) {
    return yards * 0.9144;
}

double convertFeet(double yards) {
    return yards * 3;
}

double convertInches(double yards) {
    return yards * 36;
}

double convertCenti(double yards) {
    return yards * 91.44;
}

