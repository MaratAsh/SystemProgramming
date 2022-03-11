#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft(int *matrix[2], size_t count, int *sum, int *count_pos)
{
	*count_pos = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < count; j++)
		{
			*sum += matrix[i][j];
			if (*(matrix[i] + j) > 0)
				(*count_pos)++;
		}
	}
}

int	main(void)
{
	int	*matrix[2];
	size_t	count;
	int	sum;
	int	pos_count;

	scanf("%lu", &count);
	for (size_t i = 0; i < 2; i++)
	{
		matrix[i] = malloc(sizeof(int) * count);
	}
	for (size_t i = 0; i < 2; i++)
	{
		write(1, "new row\n", 8);
		for (size_t j = 0; j < count; j++)
		{
			write(1, "number: ", 8);
			scanf("%d", matrix[i] + j);
		}
	}
	ft(matrix, count, &sum, &pos_count);
	printf("sum: %d\npos_count: %d\n", sum, pos_count);
	for (size_t i = 0; i < 2; i++)
	{
		free(matrix[i]);
	}
}
