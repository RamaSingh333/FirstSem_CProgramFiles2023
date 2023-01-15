// C program to calculate the square root of a number by using the sqrt() function
#include <stdio.h>
#include <math.h>
// to import the sqrt() function

int main() {
    double n, r;

    // n = number
    // r = root

    printf("Enter any number to find the square root::\n");
    scanf("%lf\n", &n);

    /* Calculate square root of number */
    r = sqrt(n);

    // Output
    printf("Square root of %.2lf = %.2lf", n, r);
    return 0;
}
