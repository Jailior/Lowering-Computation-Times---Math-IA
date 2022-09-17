#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265
#define size 100000

double taylor_sine(double x);

int main()
{
	printf("\n\n============================================\n\n");
	printf("Math IA Program\n\n\n");

	printf("With Sine\n\n");

	double x[size];

	for (int i = 0; i < size; i++)
		if (rand() % 2 == 0)
		{
			x[i] = PI / 2;
		}
		else
		{
			x[i] = -(PI / 2);
		}


	// start regular

	clock_t time;
	time = clock();

	float a;

	for (int i = 0; i < size; i++)
	{
		a = sin(x[i]);
	}


	time = clock() - time;
	float time_taken = ((double)time) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken);
	printf("Result: %f\n\n", a);

	// end regular

	// ----------------------------------------
	// ----------------------------------------

	// start taylor series

	printf("\nWith Taylor Sine\n\n");

	clock_t time2;
	time2 = clock();

	float b;

	for (int i = 0; i < size; i++)
	{
		b = x[i] - ((x[i] * x[i] * x[i]) / 6.0) + ((x[i] * x[i] * x[i] * x[i] * x[i]) / 120.0) - ((x[i] * x[i] * x[i] * x[i] * x[i] * x[i] * x[i]) / 5040.0);
	}
	
	time2 = clock() - time2;
	float time_taken2 = ((double)time2) / CLOCKS_PER_SEC;

	printf("Time: %f\n", time_taken2);
	printf("Result: %f\n\n", b);

	// end taylor series

	printf("\n\n============================================\n");
	return 0;
}

double taylor_sine(double x)
{
	x = x - ((pow(x, 3)) / 6) + ((pow(x, 5)) / 120) - ((pow(x, 7)) / 5040);
	return x;
}

/*
* 
*/