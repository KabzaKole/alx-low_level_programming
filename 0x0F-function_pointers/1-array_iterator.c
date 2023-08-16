/**
 * array_iterator - It will execute a function given as a
 *                  parameter on each element of an array.
 * @array: The array to be assessed.
 * @size: The size of array.
 * @action: A pointer to the function that will be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
