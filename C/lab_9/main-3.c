#include <stdlib.h>
#include <stdio.h>

typedef int (*TF) (int);

int	f(int);
int	function_TF(int, TF f1, TF f2);

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
	printf("function_TF(x, f, f) = %d\n", function_TF(x, f, f));
}
