#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	print_int_array(int *arr, const int len)
{
	printf("{ ");
	for (int i = 0; i < len; ++i)
	{
		if (i != len - 1)
			printf("%d, ", arr[i]);
		else
			printf("%d ", arr[i]);
	}
	printf("}\n");
}

int	main(void)
{
	const int	len = 15;
	int		arr_x[len];
	int		arr_y[len];

	srand(time(0));
	for (int i = 0; i <  len; ++i)
	{
		arr_x[i] = rand();
		arr_y[i] = rand();
	}
	printf("X: ");
	print_int_array(arr_x, len);
	printf("Y: ");
	print_int_array(arr_y, len);
	char	flag;
	for (int i = 0; i < len; ++i)
	{
		flag = 0;
		for (int j = 0; j < len; ++j)
		{
			if (arr_y[i] == arr_x[j]) flag = 1;
		}
		if (flag == 0)
			printf("%d\n", arr_y[i]);
	}
}
