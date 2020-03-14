#include "variadic_functions.h"

/**
*print_strings - print strings
*@separator: separator parameter
*@n: number of parameter
*Return: strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *par;

va_start(list, n);

for (i = 0 ; i < n ; i++)
{
par = va_arg(list, char *);
if (!(par))
{
par = "(nil)";
}
printf("%s", par);

if (i < (n - 1) && (separator != NULL))
{
printf("%s", separator);
}

}
va_end(list);
printf("\n");
}
