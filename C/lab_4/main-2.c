#include <stdio.h>

int	main(void)
{
	const int	n = 10;
	int	m = 1;
	int	matrix[n][n];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			matrix[i][j] = i * n + j;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("Matrix spirale transformation\n");
	for(int i = 0; i < (n / 2); i++)
	{
		for(int j = i; j < (n - i); j++)
			printf("%d ", matrix[i][j]);
		for(int j = 1; j < (n - i - i); j++)
			printf("%d ", matrix[(j + i)][(n - i) - 1]);
		for(int j = (n - 2) - i; j >= i; j--)
			printf("%d ", matrix[(n - i) - 1][(j)]);
		for(int j = ((n - i) - 2); j > i; j--)
			printf("%d ", matrix[j][i]);
	}
}
