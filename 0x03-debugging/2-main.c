#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int largest_number();
/**
* main - prints the largest of 3 integers
* Return: 0
*/
int main(void)
{
int a, b, c;
int largest;
a = 972;
b = -98;
c = 0;
largest = largest_number(a, b, c);
printf("%d is the largest number\n", largest);
return (0);
}
