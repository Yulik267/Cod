#include <iostream>

using namespace std;

int main()
{
	double n1, n2, m, s;
	cout << "Introdu primul numar: ";
	cin >> n1;
	cout << "Introdu al doilea numar: ";
	cin >> n2;

	s = n1 + n2;
	m = s / 2;

	cout << "Suma numerelor este: " << s << endl;
	cout << "Media numerelor este: " << m << endl;

	return 0;
}
