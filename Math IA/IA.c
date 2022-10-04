#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265

double taylor_sine(double x);

int main()
{
	printf("\n\n============================================\n\n");
	printf("Math IA Program\n\n\n");

	printf("With Sine\n\n");

	
	double x = PI / 2;
	double size = pow(10,9);


	// start regular

	clock_t time;
	time = clock();

	float a;

	for (int i = 0; i < size; i++)
	{
		a = sin(x);
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
		b = x - ((x * x * x) / 6.0) + ((x * x * x * x * x) / 120.0);
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
		c = 1 - (((x - (PI / 2)) * (x - (PI / 2))) / 2) + ((x - (PI / 2)) * (((x - (PI / 2))) * ((x - (PI / 2)) * (x - (PI / 2)))) / 24);
	}

	time3 = clock() - time3;
	float time_taken3 = ((double)time3) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken2);
	printf("Result: %f\n\n", c);

	// end taylor series

	printf("\n\n============================================\n");
	return 0;
}