#pragma once

#include <stdio.h>
#define N5 5

int printLoc(int* trigger, int x, int y)
{
	printf("%d,%d\n", x, y);
	*trigger = 1;
}

int mineSweeper(int matrix[N5][N5])
{
	int i, j, trigger = 0;

	for (i = 0; i < N5; i++)
		for (j = 0; j < N5; j++)
			if (matrix[i][j] != 1 && matrix[i][j] != 0)
				return 0;
	for (i = 1; i < N5 - 1; i++)
		for (j = 1; j < N5 - 1; j++)
		{
			if (matrix[i][j] == 0)
			{
				if (matrix[i - 1][j - 1] && matrix[i + 1][j + 1] && matrix[i - 1][j + 1] && matrix[i + 1][j - 1] && matrix[i + 1][j] && matrix[i - 1][j] && matrix[i][j - 1] && matrix[i][j + 1])
					printLoc( &trigger,i, j);
			}
		}
	for (i = 1; i < N5; i++)
	{
		if (matrix[0][i] == 0)
			if (5 == matrix[0][i + 1] + matrix[0][i - 1] + matrix[1][i - 1] + matrix[1][i + 0] + matrix[1][i + 1])
				printLoc( &trigger,0,i);
		if (matrix[i][0] == 0)
			if (5 == matrix[i+1][0] + matrix[i-1][0] + matrix[i-1][1] + matrix[i][1] + matrix[i+1][1])
				printLoc( &trigger,i, 0);
		if (matrix[N5 - 1][i] == 0)
			if (5 == matrix[N5 - 1][i+1] + matrix[N5 - 1][i - 1] + matrix[N5 - 2][i - 1] + matrix[1][i] + matrix[1][i + 1])
				printLoc( &trigger,N5-1, i);
		if (matrix[i][N5-1] == 0)
			if (5 == matrix[i + 1][N5-1] + matrix[i - 1][N5-1] + matrix[i - 1][N5-2] + matrix[i][1] + matrix[i + 1][1])
				printLoc( &trigger,i, N5-1);
	}
	if (matrix[0][0] == 0)
		if (3 == matrix[0][1] + matrix[1][1] + matrix[1][0])
			printLoc( &trigger,0,0);
	if (matrix[N5-1][N5-1] == 0)
		if (3 == matrix[N5-1][N5-2] + matrix[N5-2][N5-2] + matrix[N5-2][N5-1])
			printLoc( &trigger,N5-1,N5-1);
	if (matrix[N5-1][0] == 0)
		if (3 == matrix[N5 - 2][0] + matrix[N5 - 2][N5-2] + matrix[0][N5 - 2])
			printLoc( &trigger,0, N5 - 1);
	if (matrix[0][N5-1] == 0)
		if (3 == matrix[0][N5 - 2] + matrix[1][N5 - 2] + matrix[1][N5 -	1])
			printLoc( &trigger,N5-1, 0);
	
	if (!trigger)
		printf("There are no perfect flags");
}