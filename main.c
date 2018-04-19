/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include "io.h"
#include "stdio.h"

void PrintPascalTriangle(void)
{
	// http://www.cplusplus.com/reference/cstdio/printf/
	// Pascal's Triangle:
	// link original https://www.sanfoundry.com/cpp-program-print-pascal-triangle/
	// cand numarul de coloane este mai mare 10 nu mai incape sa printe
    int rows;
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            printf("   ");
        }

        for (int k = 0; k <= i; k++)
        {
			printf("      %d", val);
            val = val * (i - k) / (k + 1);
        }

		printf("\n\n");

    }

	printf("\n");
	printf("------------");

}

void PascalTriangleFromTo(void)
{

	int start = 5;
	int end  = 8;
	int rows_nr = end+1;

    for (int i = start; i < end; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows_nr - i); j++)
        {
            printf("   ");
        }

        for (int k = 0; k <= i; k++)
        {
			printf("      %d", val);
            val = val * (i - k) / (k + 1);
        }

		printf("\n\n");

    }

	printf("\n");
	printf("------------");

}

void PascalTriangleSumpProd(void)
{

	int start = 5;
	int end  = 18;
	int rows_nr = end+1;

    for (int i = start; i < end; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows_nr - i); j++)
        {
            printf("   ");
        }

        for (int k = 0; k <= i; k++)
        {

        	val = val * (i - k) / (k + 1);

		int number = val;  // here we get digits from number
		int sum = 0;
		int prod = 1;
		while (number > 0)
		{
    	int digit = number % 10;
		sum += digit;
		prod *= digit;

    	number = number / 10;
		}

		if (sum==prod)
		printf("      %d", val);

        }

		printf("\n\n");

    }

	printf("\n");
	printf("------------");

}

int main(int argc, char *argv[])
{
	// Author note: at night I will dream only triangles;
	// I rather dream some girls
	// I should get laid!
	// PrintPascalTriangle();
	// PascalTriangleFromTo();
	PascalTriangleSumpProd();

    return 0;
}


