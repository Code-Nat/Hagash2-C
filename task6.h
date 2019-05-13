#pragma once
#include <stdio.h>

#define N7 7

void employingTest(int workSec [N7][3])
{
	int i = 8, j = 0;
	int DayHours[24];

	for (i = 0; i < 24; i++)
	{
		DayHours[i] = 0;
	}

	for (i = 0; i < N7; i++)
	{
		for (j = workSec[i][1]; j < workSec[i][2]; j++)
		{
			DayHours[j] += 1;
			//printf("%d-%d ", DayHours[j],j);
		}
		//printf("\n");
	}

	for (i = 0; i < 24; i++)
	{
		if (i >= 8   && i < 17)
		{
			if (DayHours[i] < 3)
			{
				printf("%d-%d:00\n", (DayHours[i] - 3) * -1, i);
			}
		}
		else
		{
			if (DayHours[i] < 2)
			{
				printf("%d-%d:00\n", (DayHours[i] - 2) * -1, i);
			}

		}

	}
}