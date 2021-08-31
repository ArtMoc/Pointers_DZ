#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int arr[n] = {};
	cout << "Enter a numbers: ";
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n; i++) cout << arr + i << '\t';
	cout << endl;
	for (int i = 0; i < n; i++) cout << *(arr + i) << '\t' << '\t';
	cout << endl;
}