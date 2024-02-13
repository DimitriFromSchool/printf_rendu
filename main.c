

#include "ft_printf.h"

int main()
{
    int num = printf(" %p %p\n", (void *)0, (void *)0);
    ft_printf("Testing ft_printf:\n");

    ft_printf("%%\n");
    ft_printf("%%z\n");
    ft_printf("%c\n", 'A');
    ft_printf("%s\n", "Hello, World!");
    ft_printf("%p\n", (void *)1234);
    ft_printf("%p %p\n", (void *)0, (void *)0);
    ft_printf("%d\n", num);
    ft_printf("%d\n", 42);
    ft_printf("%i\n", -42);
    ft_printf("%u\n", 1234);
    ft_printf("%x\n", 255);
    ft_printf("%X\n", 255);
    

    // Resulat vraie fonction
    ft_printf("\n");   

    printf("Original printf:\n");
    printf("%%\n");
    printf("%%z\n");
    printf("%c\n", 'A');
    printf("%s\n", "Hello, World!");
    printf("%p\n", (void *)1234);
    printf("%p %p\n", (void *)0, (void *)0);
    printf("%d\n", num);
    printf("%d\n", 42);
    printf("%i\n", -42);
    printf("%u\n", 1234);
    printf("%x\n", 255);
    printf("%X\n", 255);

    return (0);
}
