#include "libft.h"
void    *ft_memset(void *s, int c, unsigned int n) 
{ 
    unsigned    char    *ptr; // Declare an unsigned char pointer variable `ptr` to hold the memory address of `s`

    ptr = s; // Assign the value of `s` to the pointer variable `ptr`
    while (n-- > 0) // Loop through each byte in the memory block `n` times
        *ptr++ = c;// Set the value of the current byte pointed by `ptr` to the integer value `c`
    return (s); 
}
/*int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Before memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Set all elements of the numbers array to the value 0 using ft_memset
    ft_memset(numbers, -1, sizeof(numbers));

    printf("After memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
*/
int main() {
    unsigned char buffer[10] = {0};

    printf("Before memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    // Set all bytes of the buffer to the value 0xFF using ft_memset
    //ft_memset(buffer, 1, sizeof(buffer));
    ft_memset(buffer, 1, sizeof(buffer));

    printf("After memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}
