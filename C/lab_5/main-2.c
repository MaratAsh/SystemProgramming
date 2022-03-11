#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int*	nums;
	size_t	count;

	scanf("%lu", &count);
	printf("count:	%lu\n", count);
	nums = calloc(sizeof(int), count);
	for (size_t i = 0; i < count; i++)
	{
		scanf("%d", nums + i);
		if (i % 2 == 1)
			nums[i] = nums[i] * 2;
	}
	for (size_t i = 0; i < count; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");

}

