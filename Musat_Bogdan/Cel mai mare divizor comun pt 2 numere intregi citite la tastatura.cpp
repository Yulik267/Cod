// cel mai mare divizor comun pt 2 numere intregi citite la tastatura.cpp 

#include <iostream>

using namespace std;

int main() {
	int a, b, n, i;
	cout << "n=";
	cin >> n;
	cout << "valorile pe rand";
	cin >> a;
	for (i = 2;i <= n;i++)
	{
		cin >> b;
		while (a != b)
			if (a > b)
				a = a - b;
			else
				b = b - a;
	}
	cout << "cmmdc=" << a;
	return 0;
}
