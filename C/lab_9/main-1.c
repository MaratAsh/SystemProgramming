#include <stdlib.h>
#include <stdio.h>

int	f(int);

int	main(int argc, char *argv[])
{
	int	x;
	if (argc > 1)
	{
		x = atoi(argv[1]);
	}
	else
	{
		scanf("%d", &x);
	}
	printf("x = %d\n", x);
	printf("f(x) = %d\n", f(x));
}