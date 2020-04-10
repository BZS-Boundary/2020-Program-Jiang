#include<iostream>
using namespace std;

int GetReverseOders(int num[], int len)
{

	int Count = 0;

	if (len > 0)
	{
		for (int i = 0; i < len; i++) 
		{
			int p1 = num[i];
			if (i < len - 1) 
			{
				for (int k = (i + 1); k < len; k++)
				{
					if (num[k] < p1)
					{
						Count++;
					}
				}
			}
		}
	}
	else
	{
		cout << "���鳤�ȱ������0" << endl;
	}

	return Count;
}

void PrintPairs(int num[], int len)
{
	if (len > 0)
	{
		for (int i = 0; i < len; i++)
		{
			int p1 = num[i];
			if (i < len - 1) 
			{
				for (int k = (i + 1); k < len; k++)
				{
					cout << p1 << num[k] << "\t";
				}
			}
		}
	}
	else
	{
		cout << "���鳤�ȱ������0" << endl;
	}
}

int main() 
{
	bool isEnd = false;
	int len;
	while (isEnd == false) 
	{
		cout << "�������鳤��(����С�ڵ���0�����˳�)��";
		cin >> len;
		if (len <= 0) 
		{
			isEnd = true;
		}
		else 
		{
			int* num = new int[len];
			for (int i = 0; i < len; i++)
			{
				int temp;
				cin >> temp;
				num[i] = temp;
			}
			cout << "����: " << endl;
			PrintPairs(num, len);
			cout << endl;
			cout << "������������" << GetReverseOders(num, len) << endl;
			delete[] num;
		}
	}

	return 0;
}