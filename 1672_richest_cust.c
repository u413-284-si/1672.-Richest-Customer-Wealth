#include <stdio.h>
#include <stdlib.h>

int	maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
	int	i;
	int	j;
	int	sum;
	int	max;

	max = 0;
	i = -1;
	while (++i < accountsSize)
	{
		sum = 0;
		j = -1;
		while (++j < *accountsColSize)
			sum += accounts[i][j];
		if (sum > max)
			max = sum;
	}
	return (max);
}

int	main(void)
{
	int	**arr;
	int	i;

	i = -1;
	arr = malloc (4 * sizeof (int *));
	while (++i < 3)
		arr[i] = calloc (2, sizeof(int));
	arr[i] = NULL;
	arr[0][0] = 1;
	arr[0][1] = 5;
	arr[1][0] = 7;
	arr[1][1] = 3;
	arr[2][0] = 3;
	arr[2][1] = 5;

	int	colsize = 3;
	int	lines = 3;
	printf("%d", maximumWealth(arr, lines, &colsize));
	i = -1;
	while (++i < 3)
		free(arr[i]);
	free(arr);
	return (0);
}
