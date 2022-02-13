#include "sort.h"

/**
 * bubble_sort - Sorting algorithm
 * @array: array of elements to sorting
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j, tmp, count;
    i = 0;
    count = size;
    tmp = 0;

    while(array && i < size - 1)
    {
        j = 0;
        while(j < count -1)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array, size);
            }
        j++;
        }
    count--;
    i++;
    }
}