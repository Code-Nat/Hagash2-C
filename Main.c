#include <stdio.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"

int main()
{
	
	//task 1
	
	char str[255] = { "0123456789" };
	char str1[255] = { "Hello, World how how how this is the endhow !" }, str2[255] = "how ";
	printf("%d\n", delete_chars(str, 3, 4));
	printf("\n%d and the text is: '%s'", delete_text(str1, str2), str1);
	/**/
	printf("\n");

	//task 2
	int matrix2[10][10];
	MatrixTester(matrix2);
	/**/
	printf("\n");

	//task 3
	int num;
	float maxPay;
	pay(&num, &maxPay);
	printf("\nThe most expensive purchase is %.2f", maxPay);
	printf("\nThe sale was used by %d clinets.\n", num);
	//return 0;
	/**/
	printf("\n");

	//task 4
	int matrix4[5][5];
	EvenBitMatrix(matrix4);
	/**/

	printf("\n");
	//task 5
	int matrix5[5][5] = {{0,1,0,1,0},
						{1,1,1,1,1},
						{0,1,0,1,0},
						{1,1,1,1,1},
						{0,1,0,1,0} };
	printf("\n%d\n", mineSweeper(matrix5));
	/**/

	printf("\n");
	//task 6
	int workSec[7][3] = {	{1,8,17}, 
							{2,9,17}, 
							{3,10,17},	
							{4,0,8}, 
							{5,0,8},
							{6,17,24},
							{7,17,24} 
						};

	employingTest(workSec);

	return 0;
	/**/
}

