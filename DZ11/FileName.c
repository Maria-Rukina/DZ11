#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h> 
#include <locale.h> 
#define _USE_MATH_DEFINES 
#include <math.h>
#define N 5
 
void main() 
{ 
	setlocale(LC_ALL, "Rus"); 
	 
	puts("Вариант 23");

	int A[N], temp, s = 0, p = 0;
	printf("Введите 5 целых чисел");
	for (int i = 0; i < N; i++)
	{ 
		printf("\na=[%d]", i + 1); 
		scanf("%f", &temp); 
		A[i] = temp; 
	} 
	 
	for (int i = 0; i < N; i++)
	{ 
		if (A[i] / 2 == 0)  
		{ 
			s++; 
		}  
		if (A[i] > 0) 
		{ 
			p++; 
		} 
	} 
	 
	double o = (double)s / p;
	printf("Отношение кол-во чётных чисел массива к кол-во положительных чисел массива %lf", o); 
	 
	return 0; 
} 
