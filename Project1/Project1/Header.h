#include <string.h>
#include <iostream>
using namespace std;

struct MangNguyen
{
	int b;
	int list[50];
};

bool KTsoChinhPhuong(int x);
void xuatCP(MangNguyen m);
int ktsoCPlonnhat(MangNguyen m);

const int MAX = 100;
struct Matrix
{
	int data[MAX][MAX];
	int n;
};

int tongBoiN(Matrix m, int n);

int* amCuoi(int a[], int n);
