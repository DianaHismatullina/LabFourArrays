// Laba_4.2_Arrays.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include <iostream>
#include <time.h>

int main(int argc, char *argv[])
{
	int **pMatritca;
	int n, m;
	printf_s("n="); scanf_s("%d", &n);
	printf_s("m="); scanf_s("%d", &m);

	pMatritca = (int **)malloc(n * sizeof(int *));

	for (int i = 0; i < n; i++)
		pMatritca[i] = (int *)malloc(m * sizeof(int));

	pMatritca[0][0] = 0;

	srand(time(NULL));

	int i = 0, j = 0;
	for (int i = 1; i<n; i++)
	{
		pMatritca[i][0] = 1 + rand() % 100;
	}

	for (int j = 1; j< m; j++)
	{
		pMatritca[0][j] = 1 + rand() % 100;
	}

	for (int i = 1; i<n; i++)
	{
		for (int j = 1; j< m; j++)
		{
			pMatritca[i][j] = pMatritca[i][0] * pMatritca[0][j];
		}
	}


	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j< m; j++)
		{
			printf_s("%9d   ", pMatritca[i][j]);
		}
		printf_s("\n");
	}

	for (int i = 0; i<n; i++) free(pMatritca[i]);
	free(pMatritca);

	system("pause");
	return 0;
}