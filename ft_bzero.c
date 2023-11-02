#include "libft.h"

void    ft_bzero(void *s, unsigned int n)
{
    char    *str; // Declare a char pointer variable `str` to hold the memory address of the data to be zeroes
    size_t  i; // Declare a size_t variable `i` to use as a loop counter

    str = (char *)s; // Cast the input pointer `s` to a char pointer and assign it to `str`
    i = 0;// Initialize the loop counter `i` to 0
    while (i < n)// Loop through each byte in the memory block until `i` reaches the size `n`
    {
        str[i] = 0;// Set the current byte at index `i` of `str` to zero
        i++;// Increment the loop counter `i`
    }
}