#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int	get_unit_digit(int number, int unit)
{
	return (number / (int)(pow(10, unit - 1)) % 10);
}

int	main(int argc, char **argv)
{
	int	number;
	int	result;

	if (argc == 1)
		scanf("%d", &number);
	else
		number = atoi(argv[1]);
	number = number % 1000;
	printf("number:	%d\n", number);
	result = get_unit_digit(number, 1) * 100 + \
		 get_unit_digit(number, 2) * 10 + \
		 get_unit_digit(number, 3);
	printf("result:	%d\n", result);
}
