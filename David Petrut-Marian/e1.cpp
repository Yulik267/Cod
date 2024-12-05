#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	//Algoritmul lui Euclid
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int nr1, nr2;
	cout << "Introdu primul numar: ";
	cin >> nr1;
	cout << "Introdu al doilea numar: ";
	cin >> nr2;

	int rez = gcd(nr1, nr2);

	cout << "Cel mai mare deivizor comun dintre " << nr1 << " si " << nr2 << " este: " << rez << endl;
	return 0;
}
