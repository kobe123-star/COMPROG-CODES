#include <stdio.h>

int main() {
  
    int value1, value2, value3, largest_value;

   
    printf("Enter three integers: ");
    scanf("%d %d %d", &value1, &value2, &value3);

   
    if (value1 >= value2) {
        if (value1 >= value3) {
            largest_value = value1; 
        } else {
            largest_value = value3; 
        }
    } else {
        if (value2 >= value3) {
            largest_value = value2; 
        } else {
            largest_value = value3; 
        }
    }

    
    printf("The largest number value is: %d\n", largest_value);

    return 0;
}

