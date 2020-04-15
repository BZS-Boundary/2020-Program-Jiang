#include <iostream>
#pragma once
using namespace std;

void printMartix4x4(int m[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

void inputMartix4x4(int m[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cin >> m[i][j];
			cout << " ";
		}
		cout << endl;
	}
}

void add(int m1[4][4], int m2[4][4]) {
	int result[4][4];
	int i = 0, j = 0;
	for (i; i < 4; i++)
	{
		for (j=0; j < 4; j++)
		{
			result[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printMartix4x4(result);
}

void minuss(int m1[4][4], int m2[4][4]) {
	int result[4][4];
	int i = 0, j = 0;
	for (i; i < 4; i++)
	{
		for (j=0; j < 4; j++)
		{
			result[i][j] = m1[i][j] - m2[i][j];
		}
	}
	printMartix4x4(result);
}

void multiple(int m1[4][4], int m2[4][4]) {
	int result[4][4];
	int i = 0, j = 0;
	for (i; i < 4; i++)
	{
		for (j=0; j < 4; j++)
		{
			result[i][j] = 0;
			for (int n = 0; n < 4; n++)
			{
				result[i][j] = result[i][j]+ m1[i][n] + m2[n][j];
			}
			
		}
	}
	printMartix4x4(result);
}