#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Introduceti primul numar de la tastatura: ";
    cin >> num1;
    cout << "Introduceti al doilea numar de la tastatura: ";
    cin >> num2;
     while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;

        } else {
            num2 -= num1;
}
}
    cout << "Cel mai mare divizor comun este: " << num1 << endl;

    return 0;
}

//Exercitiul nr. 1
//Scrieti un program in C++, care determina cel mai mare divizor comun pentru doua numere intregi scrise de la tastatura.
//Student: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
