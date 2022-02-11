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
	const int	len = 10;
	int		mas[len];
	unsigned int	even = 0;

	srand(time(0));
	for (int i = 0; i <  len; ++i)
	{
		mas[i] = rand();
		if (mas[i] % 2 == 0)
			++even;
	}
	print_int_array(mas, len);
	printf("Even elements: %u\n", even);
}
