#include "variadic_functions.h"

/**
*print_strings - print strings
*@separator. separator parameter
*@n: number of parameter
*Return: strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);

for (i = 0 ; i < n ; i++)
{

if(i != (n - 1) && separator != NULL)
{
printf("%s%s", va_arg(list, char*), separator);
}
else
{
printf("%s", va_arg(list, char*));
}

}
va_end(list);
printf("\n");
}
