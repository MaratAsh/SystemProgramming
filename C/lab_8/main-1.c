#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s \"string\"\n", argv[0]);
		return (0);
	}
	printf("string: %s\nstring len %lu\n", argv[1], ft_strlen(argv[1]));
}
