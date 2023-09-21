#include "main.h"
#include <stdio.h>

int main(void)
{
    int num1 = 12345;
    int num2 = -9876;
    int num3 = 0;

    printf("Real Printf:\n");
    printf("Number 1 with precision 4: %.4i\n", num1);
    _printf("Custom _printf:\n");
    _printf("Number 1 with precision 4: %.4i\n", num1);

    printf("Number 1 with precision 8: %.8i\n", num1);
    _printf("Number 1 with precision 8: %.8i\n", num1);

    printf("Number 2 with precision 4: %.4i\n", num2);
    _printf("Number 2 with precision 4: %.4i\n", num2);

    printf("Number 2 with precision 8: %.8i\n", num2);
    _printf("Number 2 with precision 8: %.8i\n", num2);

    printf("Number 3 with precision 2: %.2i\n", num3);
    _printf("Number 3 with precision 2: %.2i\n", num3);

    printf("Number 3 with precision 0: %.0i\n", num3);
    _printf("Number 3 with precision 0: %.0i\n", num3);

    printf("Number 3 with precision -1: %.i\n", num3);
    _printf("Number 3 with precision -1: %.i\n", num3);

    printf("Number 1 with no precision: %i\n", num1);
    _printf("Number 1 with no precision: %i\n", num1);
    _printf("css%ccs%scscscs", 'T', "Test");
    return (0);
}

