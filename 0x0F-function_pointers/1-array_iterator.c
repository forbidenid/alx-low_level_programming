#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @size: size is the size of the array
 * @array: array
 * @action: action is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;
	while (size--)
		action(*array++);
}
