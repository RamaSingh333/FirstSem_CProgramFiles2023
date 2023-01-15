#include <stdio.h>

int main(void)
{
     // Variable declaration
     char operation;
     printf("press 1 to swap number by using third variable");
     prnitf("press 2 to swap number without using third variable");

     scanf("%c", &operation);
   int a, b, temp;
    printf("Enter two numbers a and b ");
   scanf("%d %d", &a, &b);


    switch(operation)
    {
        case '1':
              // Swap logic
 printf("Before swap a=%d b=%d",a,b);
   temp = a;
   a = b;
   b = temp;

  printf("\nAfter swap a=%d b=%d",a,b);

            break;

        case '2':
           //without using 3rd vaiable
  printf("Before swap a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap a=%d b=%d",a,b);

        // operator doesn't match any case constant
        default:
            printf("Error! operator is not correct");
    }

  return 0;

}
