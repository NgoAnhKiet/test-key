#include "Header.h"

bool KTsoChinhPhuong(int x)
{
	if ((double) sqrt(x) * sqrt(x) == x)
		return true;
	return false;
}

void xuatCP(MangNguyen m)
{
	for (int i = 0; i < m.b; i++)
	{
		if (KTsoChinhPhuong(m.list[i]))
			cout << m.list[i] << ", ";
	}
}

int ktsoCPlonnhat(MangNguyen m)
{
	int t = 0;
	for (int i = 0; i < m.b; i++)
	{
		if (KTsoChinhPhuong(m.list[i]))
		{
			if (t == 0)
				t = m.list[i];
			else
				if (t < m.list[i])
					t = m.list[i];
		}
	}
	if (t != 0)
		return t;
	return -1;
}

int tongBoiN(Matrix m, int n)
{
	
	int sum = 0;
	for(int i=0; i<m.n; i++)
		for (int j = i; j < m.n; j++)
		{
			if (m.data[i][j] % n == 0)
				sum += m.data[i][j];
		}
	return sum;
}

int* amCuoi(int a[], int n)
{
	int temp = n-1;
	int* x= new int;
	*x = 0;
	while (temp != 0)
	{
		if (a[temp] < 0)
		{
			*x = a[temp]; 
			break;
		}
		temp--;
	}
	return x;
}
