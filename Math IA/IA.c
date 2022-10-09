#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265

double taylor_sine(double x);

int main()
{
	printf("\n\n============================================\n\n");
	printf("Math IA Program\n\n\n");

	printf("With log(x + 1)\n\n");

	
	double x = 0;
	double size = pow(20,7);


	// start regular

	clock_t time;
	time = clock();

	float a;

	for (int i = 0; i < size; i++)
	{
		a = log10(x + 1);
	}


	time = clock() - time;
	float time_taken = ((double)time) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken);
	printf("Result: %f\n\n", a);

	// end regular

	// ----------------------------------------
	// ----------------------------------------

	// start mclaurin series

	printf("\nWith McLaurin Polynomial\n\n");

	clock_t time2;
	time2 = clock();

	float b;

	for (int i = 0; i < size; i++)
	{
		b = (x / 2.3026) - ((x * x) / (2 * 2.3026)) + ((x * x * x) / (3 * 2.3026)) - ((x * x * x * x) / (4 * 2.3026)) + ((x * x * x * x * x) / (5 * 2.3026)) - ((x * x * x * x * x * x) / (6 * 2.3026));
	}
	
	time2 = clock() - time2;
	float time_taken2 = ((double)time2) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken2);
	printf("Result: %f\n\n", b);

	// end mclaurin series

	// ----------------------------------------
	// ----------------------------------------

	// start taylor series

	printf("\nWith Taylor Polynomial\n\n");

	clock_t time3;
	time3 = clock();

	float c;

	for (int i = 0; i < size; i++)
	{
		c = (0.477121) + ((x - 2) / (3 * 2.3026)) - (((x - 2) * (x - 2)) / (8 * 2.3026)) + (((x - 2) * (x - 2) * (x - 2)) / (36 * 2.3026)) - (((x - 2) * (x - 2) * (x - 2) * (x - 2)) / (432 * 2.3026)) + (((x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2)) / (8640 * 2.3026)) - (((x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2)) / (259200 * 2.3026));
	}

	time3 = clock() - time3;
	float time_taken3 = ((double)time3) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken2);
	printf("Result: %f\n\n", c);

	// end taylor series

	printf("\n\n============================================\n");
	return 0;
}

/*

x = 2

a = log10(x + 1);

b = (x / 2.3026) - ((x * x) / (2 * 2.3026)) + ((x* x * x) / (3 * 2.3026)) - ((x * x * x * x) / (4 * 2.3026)) + ((x * x * x * x * x) / (5 * 2.3026)) - ((x * x * x * x * x * x) / (6 * 2.3026));

c = (0.477121) + ((x-2) / (3 * 2.3026)) - (((x - 2) * (x - 2)) / (8 * 2.3026)) + (((x - 2) * (x - 2) * (x - 2)) / (36 * 2.3026)) - (((x - 2) * (x - 2) * (x - 2) * (x - 2)) / (432 * 2.3026)) + (((x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2)) / (8640 * 2.3026)) - (((x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2)) / (259200 * 2.3026));



sinx


b = x - ((x * x * x) / 6.0) + ((x * x * x * x * x) / 120.0);

c = 1 - (((x - (PI / 2)) * (x - (PI / 2))) / 2) + ((x - (PI / 2)) * (((x - (PI / 2))) * ((x - (PI / 2)) * (x - (PI / 2)))) / 24);

*/