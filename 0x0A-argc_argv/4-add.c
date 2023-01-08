#include <stdio.h>
#include <stdlib.h>

/**
* main - function prints number of args
* @argc: argument count
* @argv: argument array
* Return: returns 0
* Author: mgemoraw
*/

int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if(atoi(argv[i]))
{
sum += atoi(argv[1]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}

