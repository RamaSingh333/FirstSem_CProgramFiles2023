//C program to print ASCII values of all characters.
#include <stdio.h>
int main() {
   // Declare Variables
   int i = 0;
   printf("Character \t ASCII Value");
   //Print ASCII Values
   for (i = 65; i <=122; i++) {
      printf("%c \t\t %d", i, i);
   }
   return 0;
}
