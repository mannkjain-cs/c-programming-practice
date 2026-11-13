// Integer division, type casting, modulus and increment operators
#include <stdio.h>

int main()
{
    int a, b, x;
    float c, d;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    c = a / b;          // integer division happens first, then stored in float
    d = (float)a / b;   // cast makes it real division

    printf("a / b (int division)   = %.2f\n", c);
    printf("(float)a / b           = %.2f\n", d);
    printf("a %% b (remainder)      = %d\n", a % b);

    x = a;
    printf("x++ = %d, ", x++);  // uses old value, then adds 1
    printf("now x = %d\n", x);
    printf("++x = %d\n", ++x);  // adds 1 first, then uses new value

    return 0;
}
