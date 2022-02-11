#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	n;
	int	prev;
	int	curr;
	int	result = 1;

	write(1, "Enter N: ", 9);
	scanf("%d", &n);
	if (n > 0)
	{
		scanf("%d", &prev);
		--n;
	}
	while (n > 0)
	{
		scanf("%d", &curr);
		if (curr > prev && result == 1)
			result = 0;
		else if (curr < prev && result == 0)
			result = 2;
		prev = curr;
		--n;
	}
	if (result != 0)
		printf("Not Ascending Sequence\n");
	else
		printf("Ascending Sequence\n");
}
