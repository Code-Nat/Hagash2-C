#pragma once
#define N 5

int EvenBitMatrix(int matrix[][N])
{
	int i, j, sumRow=0, sumCol=0;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1; j++)
		{
			if (matrix[i][j] == 1)
				sumRow++;
			else
				if (matrix[i][j] == 0)
					break;
				else
					return 0;
			if (matrix[j][i] == 1)
				sumCol++;
			else
				if (matrix[j][i] == 0)
					break;
				else
					return 0;
		}
		if (!(sumRow % 2))
			return 0;
	}
	
}