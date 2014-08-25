#include <stdio.h>

/* print Celsius-Fahrenheit table */
main()
{
	printf ("Celsius-Fahrenheit\n");
	
	float celsius, fahr;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while (celsius <= upper) {
	fahr = (9.0/5.0*celsius) + (32.0);
	printf ("%3.0f %6.1f\n", celsius, fahr);
	celsius = celsius + step;
	}

}
