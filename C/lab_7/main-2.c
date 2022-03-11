#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

long long	ft(float **matrix, size_t row_mul, size_t count)
{
	float		*row;
	long long	mul;

	row = *(matrix + row_mul);
	mul = 1;
	for (size_t i = 0; i < count; i++)
		mul *= row[i];
	return (mul);
}

int	main(void)
{
	float	**matrix;
	size_t	row, column;
	size_t	row_mul;

	write(1, "row count: ", 11);
	scanf("%lu", &row);
	write(1, "column count: ", 14);
	scanf("%lu", &column);
	matrix = malloc(sizeof(float*) * row);
	for (size_t i = 0; i < row; i++)
	{
		matrix[i] = malloc(sizeof(float) * column);
		for (size_t j = 0; j < column; j++)
		{
			scanf("%f", matrix[i] + j);
			printf("%0f ", *(matrix[i] + j));
		}
		printf("\n");
	}
	write(1, "row index: ", 11);
	scanf("%lu", &row_mul);
	printf("%lu row mult %lld\n", row_mul, ft(matrix, row_mul, column));
	printf("%lux%lu\n", row, column);
	for(size_t i = 0; i < row; i++)
		free(matrix[i]);
	free(matrix);
}
