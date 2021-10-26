#include<stdio.h>
#include<math.h>

void main()
{
	printf("********* Laboratory work #2_1 ***************\n");

	double a = 0.0, b = 0.0, h = 0.0, d = 0.0;
	
    printf("Please enter a: ");
	scanf_s("%lf", &a);

	printf("Please etner b: ");
	scanf_s("%lf", &b);

	printf("Please enter h: ");
	scanf_s("%lf", &h);
	
	printf("Please enter d: ");
	scanf_s("%lf", &d);

	for (double x = a; x < b + h; x += h)
	{
		double sum = 0.0, y = 0.0;
		int k = 2;

		do
		{
			y = pow(-1, k) * cos(k * x) / (k * k - 1);
			sum += y;
			k++;
		} 
		while (fabs(y) > d);

		printf("x = %lf --- y = %lf\n", x, sum);
	}
}