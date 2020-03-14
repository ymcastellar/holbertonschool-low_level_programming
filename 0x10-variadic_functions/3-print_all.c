#include "variadic_functions.h"

void print_c(va_list list, char *separator);
void print_i(va_list list, char *separator);
void print_f(va_list list, char *separator);
void print_s(va_list list, char *separator);


/**
*print_all - print anything
*@format: number of parameter
*Return: void
*/

void print_all(const char * const format, ...)
{
va_list list;
int i, j;
char *separator = "";

stformat Dtype[] = {
{"c", print_c},
{"i", print_i},
{"f", print_f},
{"s", print_s},
{NULL, NULL}
};

va_start(list, format);
i = 0;


while (format != NULL && format[i] != '\0')
{
j = 0;
while (j < 4)
{
if (format[i] == *Dtype[j].character)
{
Dtype[j].ptrfunc(list, separator);
separator = ", ";
}
j++;
}
j = 0;
i++;
}

va_end(list);
printf("\n");

}

/**
*print_c - print char
*@list: format
*@separator: char separator
*Return: void
*/

void print_c(va_list list, char *separator)
{
printf("%s%c", separator, va_arg(list, int));
}

/**
*print_i - print int
*@list: format
*@separator: char separator
*Return: void
*/

void print_i(va_list list, char *separator)
{
printf("%s%i", separator, va_arg(list, int));
}

/**
*print_f - print float
*@list: format
*@separator: char separator
*Return: void
*/

void print_f(va_list list, char *separator)
{
printf("%s%f", separator, va_arg(list, double));
}

/**
*print_s - print string
*@list: format
*@separator: char separator
*Return: void
*/

void print_s(va_list list, char *separator)
{
char *string;
string =  va_arg(list, char*);
if (string == NULL)
{
string = "(nil)";
}
printf("%s%s", separator, string);
}
