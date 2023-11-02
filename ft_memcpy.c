#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned char *ptr_dest;
    const unsigned char *ptr_src;
    unsigned int i;

    ptr_dest = (unsigned char *)dest;
    ptr_src = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        ptr_dest[i] = ptr_src[i];
        i++;
    }
    return (dest);
}