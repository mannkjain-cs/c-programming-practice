// Difference between a macro and an inline function
#include <stdio.h>

#define SQ_WRONG(x) x * x           // no brackets: blind text replacement
#define SQ(x) ((x) * (x))           // correct macro with brackets

static inline int square(int x)     // inline function: argument is evaluated first
{
    return x * x;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("SQ_WRONG(n + 1) = %d\n", SQ_WRONG(n + 1));  // becomes n + 1 * n + 1
    printf("SQ(n + 1)       = %d\n", SQ(n + 1));
    printf("square(n + 1)   = %d\n", square(n + 1));

    return 0;
}
