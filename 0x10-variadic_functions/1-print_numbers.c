#include "variadic_functions.h"
/**
*print_numbers - print numbers
*@separator: parameter
*@n: n parameter
*Return: numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;

unsigned int i;

va_start(list, n);

for (i = 0 ; i < n ; i++)
{

if(i != (n - 1) && separator != NULL)
{
printf("%i%s", va_arg(list, unsigned int), separator);
}
else
{
printf("%i", va_arg(list, unsigned int));
}

}
va_end(list);
printf("\n");

}
