#include <stdio.h>
#include <unistd.h>

void	ft(int a, int b, int *sum, int *armean)
{
	*sum = a + b;
	*armean = (a + b) / 2;
}

int	main(void)
{
	int	nums[2];
	int	ret[2];

	write(1, "number 1: ", 10);
	scanf("%d", nums);
	write(1, "number 2: ", 10);
	scanf("%d", nums + 1);
	ft(nums[0], nums[1], ret, ret + 1);
	printf("%d + %d = %d\n", nums[0], nums[1], ret[0]);
	printf("sum / 2 ~= %d\n", ret[1]);
}
