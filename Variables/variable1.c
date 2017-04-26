#include<stdio.h>

int main() {
	//store values.
	//User inputs or temporary calculations or even output.

	//int, double, float, char, long.

	int a = 500;
	int b = 1000;

	int c = a + b;

	int d = 0;

	int e = -500;

	float f1 = 3.14;
	float f2 = 22.0/7.0; // Pi

	double f3 = (double)22 /(double) 7; // Pi

	char c1 = 'h'; //0-9 a-z A-Z !@#$%^&

	char name[100] = "Geeky Dude";


	printf("Value of C is %d and Value of d is %d and Value of e is %d\n", c, d, e);

	printf("Value of Pi in float is %f\n", f2);

	printf("Value of Pi in double is %f\n", f3);

	printf("Value of C1 is %c\n", c1);

	printf("Hello %s\n", name);

	return 0;
}
