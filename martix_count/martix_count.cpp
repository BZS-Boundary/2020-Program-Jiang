#include <iostream>
using namespace std;
void martix_add(int a[][4], int b[][4],int(&c)[4][4]) {
	for(int i=0;i<4;i++)
		for (int j = 0; j < 4; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
}
void martix_decline(int a[][4], int b[][4], int(&c)[4][4]) {
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
}
void martix_mult(int a[][4], int b[][4], int(&c)[4][4]) {
	int temp;
	for (int x = 0; x < 4; x++)
	{
		for (int i = 0; i < 4; i++)
		{
			temp = 0;
			for (int j = 0; j < 4; j++)
			{
				temp = temp + a[i][j] * b[j][i];
			}

		}
		c[i][x] = temp;
	}
}
void put(int c[4][4]) {


	int z = 1;//����
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (z % 4 != 0)
			{
				cout << c[i][j] << " ";
				z++;
			}
			else
			{
				cout << c[i][j] << endl;
				z++;
			}
}
int main() {
	int a[4][4] = { { 1,1,1,1 } ,{1, 1, 1, 1} ,{1, 1, 1, 1} ,{1, 1, 1, 1} };
	int b[4][4] = { { 2,2,2,2 } ,{2, 2, 2, 2} ,{2, 2, 2, 2} ,{2, 2, 2, 2} };
	int c[4][4];
	martix_add(a, b, c);
	put(c);
	martix_decline(a, b, c);
	put(c);
	martix_mult(a, b, c);
	put(c);

}