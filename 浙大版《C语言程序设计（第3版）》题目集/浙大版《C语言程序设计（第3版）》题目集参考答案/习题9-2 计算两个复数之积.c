#include <stdio.h>

struct complex{
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y)
{
    struct complex t;
    t.real=x.real*y.real-x.imag*y.imag;
    t.imag=x.real*y.imag+y.real*x.imag;
    return t;
};

int main()
{
    struct complex product, x, y;

    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
    product = multiply(x, y);
    printf("(%d+%di) * (%d+%di) = %d + %di\n",
            x.real, x.imag, y.real, y.imag, product.real, product.imag);

    return 0;
}
