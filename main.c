
#define PURP "\e[35m"
#define GREEN "\e[32m"
#define BLUE "\e[34m"
#define RESET "\e[0m"
#define GREENT "\e[42m"
#define BLUET "\e[44m"
#define PURPT "\e[45m"

#include "ft_printf.h"

int main()
{
    int day = 13;
    char month[] = "Janvier";

    printf("\n");
    ft_printf("%sRésultat Ft_printf%s\n", PURPT, RESET);
    printf("\n");

    ft_printf("%sTest 1 :%s ", PURP, RESET);
    int test1 = ft_printf("%%\n");

    ft_printf("%sTest 2 :%s ", PURP, RESET);
    int test2 = ft_printf("%%z\n");

    ft_printf("%sTest 3 :%s ", PURP, RESET);
    int test3 = ft_printf("%c\n", 'A');

    ft_printf("%sTest 4 :%s ", PURP, RESET);
    int test4 = ft_printf("%s\n", "Hello, World!");

    ft_printf("%sTest 5 :%s ", PURP, RESET);
    int test5 = ft_printf("%p\n", (void *)1234);

    ft_printf("%sTest 6 :%s ", PURP, RESET);
    int test6 = ft_printf("%p\n", (void *)0);

    ft_printf("%sTest 7 :%s ", PURP, RESET);
    int test7 = ft_printf("%p\n", "0");

    ft_printf("%sTest 8 :%s ", PURP, RESET);
    int test8 = ft_printf("%p %p\n", (void *)0, (void *)0);

    ft_printf("%sTest 9 :%s ", PURP, RESET);
    int test9 = ft_printf("Le %d %s de cette année\n", day, month);

    ft_printf("%sTest 10 :%s ", PURP, RESET);
    int test10 = ft_printf("%d\n", 42);

    ft_printf("%sTest 11 :%s ", PURP, RESET);
    int test11 = ft_printf("%i\n", -42);

    ft_printf("%sTest 12 :%s ", PURP, RESET);
    int test12 = ft_printf("%u\n", 1234);

    ft_printf("%sTest 13 :%s ", PURP, RESET);
    int test13 = ft_printf("%u\n", 0);

    ft_printf("%sTest 14 :%s ", PURP, RESET);
    int test14 = ft_printf("%x\n", 255);

    ft_printf("%sTest 15 :%s ", PURP, RESET);
    int test15 = ft_printf("%X\n", 255);
    
    // Resulat vraie fonction
    printf("\n");
    printf("%sRésultat Printf:%s\n", BLUET, RESET);
    printf("\n");


    printf("%sTest 1 :%s ", BLUE, RESET);
    int res1 = printf("%%\n");

    printf("%sTest 2 :%s ", BLUE, RESET);
    int res2 = printf("%%z\n");

    printf("%sTest 3 :%s ", BLUE, RESET);
    int res3 = printf("%c\n", 'A');

    printf("%sTest 4 :%s ", BLUE, RESET);
    int res4 = printf("%s\n", "Hello, World!");

    printf("%sTest 5 :%sv", BLUE, RESET);
    int res5 = printf("%p\n", (void *)1234);

    printf("%sTest 6 :%s ", BLUE, RESET);
    int res6 = printf("%p\n", (void *)0);

    printf("%sTest 7 :%s ", BLUE, RESET);
    int res7 = printf("%p\n", "0");

    printf("%sTest 8 :%s ", BLUE, RESET);
    int res8 = printf("%p %p\n", (void *)0, (void *)0);

    printf("%sTest 9 :%s ", BLUE, RESET);
    int res9 = printf("Le %d %s de cette année\n", day, month);

    printf("%sTest 10 :%s ", BLUE, RESET);
    int res10 = printf("%d\n", 42);

    printf("%sTest 11 :%s ", BLUE, RESET);
    int res11 = printf("%i\n", -42);

    printf("%sTest 12 :%s ", BLUE, RESET);
    int res12 = printf("%u\n", 1234);

    printf("%sTest 13 :%s ", BLUE, RESET);
    int res13 = printf("%u\n", 0);

    printf("%sTest 14 :%s ", BLUE, RESET);
    int res14 = printf("%x\n", 255);
    
    printf("%sTest 15 :%s ", BLUE, RESET);
    int res15 = printf("%X\n", 255);

    printf("\n");
    printf("%sValeurs retournées :%s\n", GREENT, RESET);
    printf("\n");

    printf("Test 1 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test1, GREEN, RESET, res1);
    printf("Test 2 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test2, GREEN, RESET, res2);
    printf("Test 3 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test3, GREEN, RESET, res3);
    printf("Test 4 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test4, GREEN, RESET, res4);
    printf("Test 5 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test5, GREEN, RESET, res5);
    printf("Test 6 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test6, GREEN, RESET, res6);
    printf("Test 7 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test7, GREEN, RESET, res7);
    printf("Test 8 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test8, GREEN, RESET, res8);
    printf("Test 9 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test9, GREEN, RESET, res9);
    printf("Test 10 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test10, GREEN, RESET, res10);
    printf("Test 11 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test11, GREEN, RESET, res11);
    printf("Test 12 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test12, GREEN, RESET, res12);
    printf("Test 13 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test13, GREEN, RESET, res13);
    printf("Test 14 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test14, GREEN, RESET, res14);
    printf("Test 15 :\n%sPrintf :%s %d | %sFt_Printf%s : %d\n", BLUE, RESET, test15, GREEN, RESET, res15);

    printf("\n");

    return (0);
}
