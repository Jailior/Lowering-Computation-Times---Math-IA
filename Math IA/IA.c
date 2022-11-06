#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265
#define e 2.718281828459045

int main()
{
	printf("\n\n============================================\n\n");
	printf("Math IA Program\n\n\n");

	printf("With dampening harmonic using trig functions\n\n");

	double x = 3.0;
	double size = pow(10, 8);


	// start regular

	clock_t time;
	time = clock();

	float a;

	for (int i = 0; i < size; i++)
	{
		a = (20) * pow(e, ((-4.0 / 100.0) * x)) * (cos(x + 4) + sin(x + 4));
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
		b = -28.21 + (3.19 * x) + (28.00 * ((x * x) / 2)) - (5.44 * ((x * x * x) / 6)) - (27.61 * ((x * x * x * x) / 24)) + (7.65 * ((x * x * x * x * x) / 120)) + (27.04 * ((x * x * x * x * x * x) / 720)) - (9.83 * ((x * x * x * x * x * x * x) / 5040)) - (26.30 * ((x * x * x * x * x * x * x * x) / 40320)) + (11.95 * ((x * x * x * x * x * x * x * x * x) / 362880));
	}
	
	time2 = clock() - time2;
	float time_taken2 = ((double)time2) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken2);
	printf("Result: %f\n\n", b);

	// end mclaurin series

	// ----------------------------------------
	// ----------------------------------------

	// start taylor series

	//printf("\nWith Taylor Polynomial\n\n");

	clock_t time3;
	time3 = clock();

	float c;

	for (int i = 0; i < size; i++)
	{
		c = (0.477121) + ((i - 2) / (3 * 2.3026)) - (((i - 2) * (i - 2)) / (18 * 2.3026)) + (((i - 2) * (i - 2) * (i - 2)) / (81 * 2.3026)) - (((i - 2) * (i - 2) * (i - 2) * (i - 2)) / (324 * 2.3026)) + (((i - 2) * (i - 2) * (i - 2) * (i - 2) * (i - 2)) / (1215 * 2.3026)) - (((i - 2) * (i - 2) * (i - 2) * (i - 2) * (i - 2) * (i - 2)) / (4374 * 2.3026));
	}

	time3 = clock() - time3;
	float time_taken3 = ((double)time3) / CLOCKS_PER_SEC;

	//printf("Time: %f\n", time_taken2);
	//printf("Result: %f\n\n", c);

	// end taylor series

	printf("\n\n============================================\n");
	return 0;
}

/*

x = 2

a = log10(x + 1);

b = (x / 2.3026) - ((x * x) / (2 * 2.3026)) + ((x* x * x) / (3 * 2.3026)) - ((x * x * x * x) / (4 * 2.3026)) + ((x * x * x * x * x) / (5 * 2.3026)) - ((x * x * x * x * x * x) / (6 * 2.3026));

c = (0.477121) + ((x - 2) / (3 * 2.3026)) - (((x - 2) * (x - 2)) / (18 * 2.3026)) + (((x - 2) * (x - 2) * (x - 2)) / (81 * 2.3026)) - (((x - 2) * (x - 2) * (x - 2) * (x - 2)) / (324 * 2.3026)) + (((x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2)) / (1215 * 2.3026)) - (((x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2) * (x - 2)) / (4374 * 2.3026));



sinx

a = sin(x);

b = x - ((x * x * x) / 6.0) + ((x * x * x * x * x) / 120.0);

c = 1 - (((x - (3.14159265 / 2)) * (x - (3.14159265 / 2))) / 2) + ((x - (3.14159265 / 2)) * (((x - (3.14159265 / 2))) * ((x - (3.14159265 / 2)) * (x - (3.14159265 / 2)))) / 24);


dampening harmonic

a = 20 * pow(e, ((-4 / 100) * x))) * (sin(x + 4) + cos(x + 4));


b = -28.21 + (3.19 * x) + (28.00 * ((x * x) / 2)) - (5.44 * ((x * x * x) / 6)) - (27.61 * ((x * x * x * x) / 24)) + (7.65 * ((x * x * x * x * x) / 120)) + (27.04 * ((x * x * x * x * x * x) / 720)) - (9.83 * ((x * x * x * x * x * x * x) / 5040)) - (26.30 * ((x * x * x * x * x * x * x * x) / 40320)) + (11.95 * ((x * x * x * x * x * x * x * x * x) / 362880));


*/