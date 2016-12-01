// Laba_4.1_Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int *pMassiv;
	int n;
	printf_s("n=");
	scanf_s("%d", &n);
	
	pMassiv = (int *)malloc(n * sizeof(int));
	
	int i = 0;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		pMassiv[i] = -50 + rand() % 100;
		printf_s("%d         ", pMassiv[i]);
	}
	
	if ((n / 2. - n / 2) != 0) pMassiv[n / 2] = 2 * pMassiv[n / 2];

	for (i = 0; i < n/2.; i++)
	{
		
		int buf1 = pMassiv[i], buf2 = pMassiv[n - 1 - i];
		pMassiv[i] = buf1 + buf2;
		pMassiv[n - 1 - i] = buf1*buf2;
	}

	
	printf_s("\n");
	for (int i = 0; i < n; i++)
		printf("%d        ", pMassiv[i]);

	printf_s("\n");

	free(pMassiv);
	
	system("pause");
	return 0;
}