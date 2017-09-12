#include<stdio.h>
int main()
{
double number;
printf("enter a number");
scanf("%f",&number);
if (number < 0)
{
printf("the number is negative");
else if(number == 0)
printf("the number is zero");
}
else
printf("the number is positive");
return 0;
}
