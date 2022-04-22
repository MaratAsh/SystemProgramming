#include <stdlib.h>
#include <stdio.h>

int	f(int);
int	function(int, int (*f1)(int), int (*f2)(int));

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
	printf("function(x, f, f) = %d\n", function(x, f, f));
}
