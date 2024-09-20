#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// перший спосіб
	int k;
	double P;
	double E;
	int i;
	P = 1;
	k = 1;
	while (k <= 10)

	{
		E = 0;
		i = 1;
		while (i <= k)

		{
			E += i*i;
			i++;

		}
		P *= E/(1+E);
		k++;

	}
	cout << P << endl;
	// 2 спосіб
	P = 1;
	k = 1;
	do
	{
		E = 0;
		i = 1;
		do
		{
			E += i * i;
			i++;

		} while (i <= k);
		P *= E / (1 + E);
		k++;

	} while (k <= 10);
	cout << P << endl;
	// 3 спосіб
	P = 1;
	for (k = 1; k <= 10; k++)

	{
		E = 0;
		for (i = 1; i <= k; i++)

		{
			E += i * i;

		}
		P *= E / (1 + E);

	}
	cout << P << endl;
	// 3 спосіб
	P = 1;
	for (k = 10; k>= 1; k--)
	{
		E = 0;
		for (i = k; i >= 1; i--)

		{
			E += i * i;

		}
		P *= E / (1 + E);
		
	}
	cout << P << endl;
	return 0;
}