

#include "ft_printf.h"

int main()
{
    int num = printf(" %p %p\n", (void *)0, (void *)0);
    ft_printf("Testing ft_printf:\n");

    int test1 = ft_printf("test 1 : %%\n");
    int test2 = ft_printf("test 2 : %%z\n");
    int test3 = ft_printf("test 3 : %c\n", 'A');
    int test4 = ft_printf("test 4 : %s\n", "Hello, World!");
    int test5 = ft_printf("test 5 : %p\n", (void *)1234);
    int test6 = ft_printf("test 6 : %p\n", (void *)0);
    int test7 = ft_printf("test 7 : %p\n", "0");
    int test8 = ft_printf("test 8 : %p %p\n", (void *)0, (void *)0);
    int test9 = ft_printf("test 9 : %d\n", num);
    int test10 = ft_printf("test 10 : %d\n", 42);
    int test11 = ft_printf("test 11 : %i\n", -42);
    int test12 = ft_printf("test 12 : %u\n", 1234);
    int test13 = ft_printf("test 13 : %u\n", 0);
    int test14 = ft_printf("test 14 : %x\n", 255);
    int test15 = ft_printf("test 15 : %X\n", 255);
    

    // Resulat vraie fonction
    ft_printf("\n");   
    printf("Original printf:\n");

    int res1 = ft_printf("test 1 : %%\n");
    int res2 = ft_printf("test 2 : %%z\n");
    int res3 = ft_printf("test 3 : %c\n", 'A');
    int res4 = ft_printf("test 4 : %s\n", "Hello, World!");
    int res5 = ft_printf("test 5 : %p\n", (void *)1234);
    int res6 = ft_printf("test 6 : %p\n", (void *)0);
    int res7 = ft_printf("test 7 : %p\n", "0");
    int res8 = ft_printf("test 8 : %p %p\n", (void *)0, (void *)0);
    int res9 = ft_printf("test 9 : %d\n", num);
    int res10 = ft_printf("test 10 : %d\n", 42);
    int res11 = ft_printf("test 11 : %i\n", -42);
    int res12 = ft_printf("test 12 : %u\n", 1234);
    int res13 = ft_printf("test 13 : %u\n", 0);
    int res14 = ft_printf("test 14 : %x\n", 255);
    int res15 = ft_printf("test 15 : %X\n", 255);

    printf("Valeurs retournées Original printf:\n");


    return (0);
}
