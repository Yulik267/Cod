#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n); // Declara?ia func?iei bubbleSort

int main()
{
    const int MAX_SIZE = 99; // Dimensiunea maxim? a tabloului
    int list[MAX_SIZE]; // Tabloul pentru stocarea elementelor
    int n; // Num?rul de elemente

    cout << "Numarul de elemente din tablou (max " << MAX_SIZE << "): ";
    cin >> n; // Cite?te num?rul de elemente

    if (n > MAX_SIZE) // Verific? dac? num?rul este mai mare decât MAX_SIZE
    {
        cout << "Introdu o valoare mai mica sau egala cu " << MAX_SIZE << "." << endl;
        return 1; // Întoarce 1 pentru a indica o eroare
    }

    cout << "\nIntrodu " << n << " elemente:\n";
    for (int i = 0; i < n; i++) // Ciclu pentru a citi elementele
    {
        cout << "Elementul [" << i << "]: ";
        cin >> list[i]; // Cite?te elementul ?i îl stocheaz? în tabloul list
    }

    bubbleSort(list, n); // Apeleaz? func?ia de sortare

    cout << "\nTabloul sortat este: "; // Afi?eaz? mesajul pentru tabloul sortat
    for (int i = 0; i < n; i++) // Ciclu pentru a afi?a elementele sortate
    {
        cout << " " << list[i]; // Afi?eaz? fiecare element
    }
    cout << endl; // Afi?eaz? o linie nou?

    return 0; // Întoarce 0 pentru a indica succesul programului
}

void bubbleSort(int arr[], int n) // Corectat: parametru n ad?ugat
{
    for (int pass = 0; pass < n - 1; pass++) // Ciclu pentru num?rul de treceri
    {
        for (int i = 0; i < n - 1 - pass; i++) // Ciclu pentru compararea elementelor adiacente
        {
            if (arr[i] > arr[i + 1]) // Compar? elementele
            {
                int temp = arr[i]; // Stocheaz? valoarea lui arr[i] în temp
                arr[i] = arr[i + 1]; // Mut? valoarea lui arr[i + 1] în arr[i]
                arr[i + 1] = temp; // Atribuie valoarea stocat? în temp lui arr[i + 1]
            }
        }
    }
}