 // C program to convert days in to years, weeks and days.

 #include <stdio.h>

int main()
{
  	int NoOfDays, years, weeks, days;

 	printf("\n Please Enter the Number of days  :  ");
  	scanf("%d", &NoOfDays);

  	years = NoOfDays / 365;
  	weeks = (NoOfDays % 365) / 7;
  	days = (NoOfDays % 365) % 7;


    printf("\n Years  = %d", years);
    printf("\n Weeks  = %d", weeks);
    printf("\n Days   = %d", days);

   	return 0;
}
