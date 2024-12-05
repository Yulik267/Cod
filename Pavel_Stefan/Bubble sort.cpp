#include <iostream> 
#include <vector>   
using namespace std; 

void bubbleSort(vector<int>& arr); // Declaratia functiei bubbleSort

int main() 
{
    int n; // Declara variabila pentru numarul de elemente
    cout << "Numarul de elemente din tablou: "; // Afiseaza mesajul pentru utilizator
    cin >> n; 

    vector<int> list(n); // Creeaza un vector cu n elemente
    cout << "\nIntrodu " << n << " elemente:\n"; // Afiseaza un mesaj pentru introducerea elementelor
    for (int i = 0; i < n; i++) // Ciclu pentru a citi elementele
    {
        cout << "Introdu elementul pentru pozitia [" << i << "]: "; // Afiseaza mesajul pentru fiecare element
        cin >> list[i]; // Citeste elementul si îl stocheaza în vector
    }

    bubbleSort(list); // Apeleaza functia de sortare

    cout << "\nTabloul sortat este:"; // Afiseaza mesajul pentru tabloul sortat
    for (const int& elem : list) // Ciclu pentru a afisa elementele sortate
    {
        cout << " " << elem; // Afiseaza fiecare element
    }

    cout << endl; 

    return 0; // Întoarce 0 pentru a indica succesul programului
}

 void bubbleSort(vector<int>& arr) // Definirea functiei bubbleSort
{
    int n = arr.size(); // Obtine dimensiunea vectorului
    for (int pass = 0; pass < n - 1; pass++) // Ciclu pentru numarul de treceri
    {
        bool swapped = false; // Initializeaza variabila pentru a verifica daca s-au facut swap-uri
        for (int i = 0; i < n - 1 - pass; i++) // Ciclu pentru compararea elementelor adiacente
        {
            if (arr[i] > arr[i + 1]) // Compara elementele adiacente
            {
                swap(arr[i], arr[i + 1]); // Face swap daca sunt în ordine gresita
                swapped = true; // Marcheaza ca a avut loc un swap
            }
        }
        if (!swapped) // Verifica daca nu s-au facut swap-uri
            break; // Iese din ciclu daca tabloul este sortat
    }
}