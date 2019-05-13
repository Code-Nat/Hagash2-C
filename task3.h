#pragma once
#include <stdio.h>
#include <string.h>

void pay(int* num, float* maxPay)
{
	int prodacts, i,temp;
	float Csum = 0;
	char buyerName[255] = { "" };
	*maxPay = 0;
	*num = 0;
	printf("Please enter buyers name:\n");
	scanf_s("%s", &buyerName, 254);
	while (!((buyerName[0] == '0') && (buyerName[1] == '\0')))
	{
		Csum = 0;
		printf("Please enter amount of prodacts the clinet buys:\n");
		scanf_s("%d", &prodacts);
		for (i = 0; i < prodacts; i++)
		{
			printf("please enter price of %d prodact\n", i+1);
			scanf_s("%d", &temp);
			Csum += temp;
		}
		if (prodacts > 2)
			Csum -= Csum * 0.3;
		else
			Csum = Csum - Csum * (prodacts / 10.0);
		if (Csum > *maxPay)
			*maxPay = Csum;
		printf("The clinet needs to pay %.2f\n", Csum);
		(*num)++;
		printf("Please enter buyers name, or enter 0 to exit\n");
		scanf_s("%s", &buyerName, 254);
	}
				

}