#include "function_pointers.h"

/**
*array_iterator - executes a function given as a parameter.
*@array: parameter
*@size: parameter
*@action: parameter
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

if (action != NULL && array != NULL)
{
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}

}
