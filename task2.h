#pragma once
int MatrixTester(int matrix[][10])
{
	int i, j, once = 0, zeros = 0, trigger = 0, safeList[10] = {0,0,0,0,0,0,0,0,0,0};
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (matrix[i][j] == 1)
				once++;
			else if (matrix[i, j] == 0)
				zeros++;
			else
				if (trigger)
					return 0;
				else
					trigger = i;
		}
		if (safeList[trigger] == 1)
			return 0;
		else
			safeList[trigger] = 1;
		trigger = 0;
	}
	if (once < 40)
		return 0;
	if (zeros < 40)
		return 0;
	return 1;
}