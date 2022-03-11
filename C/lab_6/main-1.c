#include <stdio.h>
#include <unistd.h>

float	ft_P(float a, float b)
{
	return (a * 2 + b * 2);
}

int	main(void)
{
	float	a, b;

	write(1, "a: ", 3);
	scanf("%f", &a);
	write(1, "b: ", 3);
	scanf("%f", &b);
	printf("a = %f\nb = %f\nP = %f\n", a, b, ft_P(a, b));
}
