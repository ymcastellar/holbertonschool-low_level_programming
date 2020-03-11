#include "function_pointers.h"

/**
*array_iterador - executes a function given as a parameter on each element of an array.
*@array: parameter
*@size: parameter
*@action: parameter
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned i;

if(action != NULL)
{
for(i = 0 ; i < size ; i++)
{
action(array[i]);
}
}

}
