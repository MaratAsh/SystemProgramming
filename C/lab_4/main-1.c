#include <stdio.h>

int	main(void)
{
	int	matrix[10][10];

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (i == j)
				matrix[i][j] = i;
			else
				matrix[i][j] = 0;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
