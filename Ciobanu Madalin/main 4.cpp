#include <iostream>
using namespace std;
int main() {
    const int n = 5;
    int arr[n];
    cout << "Introduceti " << n << " elemente: ";
    for (int i = 0; i < n; ++i) {
    cin >> arr[i];
}
    for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
    if (arr[j] > arr[j + 1]) {

    swap(arr[j], arr[j + 1]);
}
}
}
    cout << "Vectorul sortat: ";
    for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
}
    cout << std::endl;
return 0;
}

//Exercitiul nr. 4;
//Scrieti un program in C++, care sa citeasca un vector de la tastatura folosind metoda bulelor.
//Student: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
