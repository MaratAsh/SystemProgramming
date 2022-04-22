#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int	x;
	int	operation;
	int	a;
	int	b;
	write(1, "a = ", 4);
	scanf("%d", &a);
	write(1, "b = ", 4);
	scanf("%d", &b);
	while (1)
	{
		write(1, "Operations:\n", 12);
		write(1, "\t1 - a^b\n", 9);
		write(1, "\t2 - a*b\n", 9);
		write(1, "\t3 - a%b\n", 9);
		write(1, "\t4 - multiple or not\n", 21);
		write(1, "\t5 - reset a and b\n", 19);
		write(1, "\tother text - exit\n", 19);
		write(1, "a (", 4);
		ft_putnbr_fd(a, 1);
		write(1, ") b (", 5);
		ft_putnbr_fd(b, 1);
		write(1, ")\n", 2);
		write(1, "operation type: ", 16);
		scanf("%d", &operation);
		if (operation == 1)
		{
			ft_putnbr_fd(a^b, 1);
		}
		else if (operation == 2)
		{
			ft_putnbr_fd(a*b, 1);
		}
		else if (operation == 3)
		{
			ft_putnbr_fd(a%b, 1);
		}
		else if (operation == 4)
		{
			if (a % b == 0)
				write(1, "numbers are a multiple", 22);
			else
				write(1, "numbers are not multiple", 24);
		}
		else if (operation == 5)
		{
			write(1, "a = ", 4);
			scanf("%d", &a);
			write(1, "b = ", 4);
			scanf("%d", &b);
		}
		else
			break;
		write(1, "\n\n\n", 3);
	}
}
