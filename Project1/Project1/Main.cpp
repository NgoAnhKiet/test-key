#include "Header.h"

int main()
{
	/*MangNguyen a;
	a= { 5,{2,3,7,5,0} };

	xuatCP(a);

	cout << endl;
	cout<<ktsoCPlonnhat(a);

	Matrix m = { {{1,2,4},
				  {5,6,8},
				  {9,10,12}},3 };
	int n;
	cout << "\nNhap n: "; cin >> n;
	cout << tongBoiN(m, n);*/



int n = 0;
	int* a= new int;
	int temp;
	do
	{	cout << "nhap a[" << n << "]: ";
		cin >> temp;
		if (temp == -99)
			break;
		a[n] = temp;
		n++;
	} while (true);

for (int i = 0; i < n; i+=2)
	{
		cout << a[i]<<", ";
	}
	
	cout << endl << "\nso luong: " << n;
	cout << endl;

	cout << *(amCuoi(a, n));







	char* p = new char;
	cin.getline(p,30);
	cout<<strlen(p);


	



	return 0;
}

