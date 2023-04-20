#include "function_pointers.h"
/**
 * array_iterator - unction given as a parameter on
 * each element of an array
 * Maya 19/04/23
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
