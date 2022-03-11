#include <stdio.h>

int	main(int argc, char **argv)
{
	int	A[5] = { 0, 1, 2, 3, 4 };
	int	B[5] = { 3, 4, 5, 6, 7 };
	int	C[10];
	int	index;
	int	dupl;
	/*
	if (argc != 3)
	{
		printf("%s \"numbers\" \"numbers\"");
		return (0);
	}*/
	index = 0;
	for (int i = 0; i < 5; i++)
	{
		dupl = 0;
		for (int j = 0; j < 5; j++)
		{
			if (A[i] == B[j])
				dupl = 1;
		}
		if (dupl == 0)
		{
			C[index] = A[i];
			index++;
		}
	}
	for (int j = 0; j < 5; j++)
	{
		dupl = 0;
		for (int i = 0; i < 5; i++)
		{
			if (A[i] == B[j])
				dupl = 1;
		}
		if (dupl == 0)
		{
			C[index] = B[j];
			index++;
		}
	}
	for (int i = 0; i < index; i++)
	{
		printf("%d ", C[i]);
	}
	printf("\n");
}
