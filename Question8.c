//C program to swap two numbers USING 3RD VARIABLE
#include <stdio.h>
int main(void)
{
// Variable declaration
int a, b, temp;
printf("Enter two numbers a and b ");
scanf("%d %d", &a, &b);
// Swap logic using 3rd variable
{
 temp = a;
a = b;
b = temp;
printf("\n After swapping \na = %d\nb = %d\n", a, b);
}

//Swap logic without using 3rd variable
/* Logic to swap two numbers. */
   a = a + b;
   b = a - b;
   a = a - b;

   printf("\n After swapping a = %d b = %d",a ,b);

return 0;
}
