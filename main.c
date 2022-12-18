#include <stdio.h>
#include <stdlib.h>

int main()
{

	int number,line,column,i,j;
	printf("Enter the number of lines and columns for Square Matrix: ");
	printf("\n-----Matrix 1-----\n");
	scanf("%d",&number);
	column=number;
	line=number;
	int matrix [line] [column];
	int matrix2 [line] [column];
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("\n[%d][%d] ---> ",i+1,j+1);
			scanf("%d",&matrix[i] [j]);
		}	
	}
	printf("\n\n Matrix 1 \n");
	for(i=0;i<column;i++)
	{
		for(j=0;j<column;j++)
		{
			printf(" %d ",matrix[i][j]);
		}
		printf("\n");
	}

	printf("----Matrix 2-----\n");
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("\n[%d][%d] ---> ",i+1,j+1);
			scanf("%d",&matrix2[i] [j]);
		}	
	}
	printf("\n\nMatrix 2 \n");
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
			printf(" %d ",matrix2[i][j]);
		}
		printf("\n");
	}
	printf("Sum of matrices ");
	int sum [line][column];	
	for(i=0;i<line;i++)
	{	
			for(j=0;j<column;j++)
			{
				sum[i][j]=matrix[i][j]+matrix2[i][j];
			}
			printf("\n");
	}
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
