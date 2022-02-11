#include <stdio.h>
#include <stdlib.h>

#define bool char
#define true 1
#define false 0

bool	array_has_num(int *arr, int len, int num)
{
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] == num)
			return (true);
	}
	return (false);
}

int	main(int argc, char **argv)
{
	int	marks[4];

	if (argc >= 5)
		for (int i = 0; i < 4; ++i)
			marks[i] = atoi(argv[i + 1]) % 6;
	else
	{
		for (int i = 0; i < 4; ++i)
		{
			scanf("%d", marks + i);
			marks[i] = marks[i] % 6;
		}
	}
	if (array_has_num(marks, 4, 2))
		printf("Отчислен");
	else if (array_has_num(marks, 4, 3))
		printf("Лишен стиендии");
	else if (array_has_num(marks, 4, 4))
		printf("Обычная стипендия");
	else
		printf("Повышенная стипендия");
	printf("\n");

}
