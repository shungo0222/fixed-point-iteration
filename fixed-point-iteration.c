#include <stdio.h>
#include <math.h>

#define EPS (1.0e-6) // the error threshold
#define f(x) (x*x - 2*x + sin(x)) // non-linear equation
#define g(x) (-sin(x) / (x - 2)) // x != 2 // iterative formula

int main(void) {
    double xnew, xold;

    printf("x0="); // initial value
    scanf("%lf", &xnew);

    xold = xnew - 0.5;

    while (fabs(xnew - xold) > EPS) {
        xold = xnew;
        xnew = g(xold);
        printf("x=%.6f f(x)=%.10f\n", xnew, f(xnew));
    }

    return 0;
}