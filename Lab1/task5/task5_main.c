#include <stdio.h>
#include <math.h>

double f(double x);

void main(){
	double x = 5;
	double fx = f(x);
	printf("x =  %.4lf\nf(x) = %.4lf", x, fx);

	printf("\nEnter x:\n");
	scanf("%lf", &x);
	fx = f(x);
	printf("x =  %.4lf\nf(x) = %.4lf\n", x, fx);

	system("pause");
    return 0;
}
