#include "main.h"
#include <stdio.h>

/**
* print_array - prints array lements
* @a: input integer
* @n: input integer
* Description: this prints prints strings
* Return: returns nothing
*/



void print_array(int *a, int n)
{
int c = 0;
while (c < n)
{
printf("%d", a[c]);
if (c != n - 1)
{
printf(", ");
}
c++;
}
printf("\n");
}
