#include <stdio.h>

int	main(int argc, char *argv[])
{
	double		average = 0;
	int		number = 0;
	long long int	sum_seq = 0;
	int		size_seq = 0;

	scanf("%d", &number);
	while (number)
	{
		++size_seq;
		sum_seq += number;
		scanf("%d", &number);
	}
	average = sum_seq / (double) size_seq;
	printf("AVG:	%f\n", average);
}
