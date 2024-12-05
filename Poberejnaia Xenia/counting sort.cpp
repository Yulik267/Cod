#include <iostream>
using namespace std;

// Funcție pentru a găsi valoarea maximă dintr-un tablou
int Gaseste_Maxim(int Tablou[], int N) {
    int maxim = Tablou[0];
    for (int i = 1; i < N; i++)
        if (Tablou[i] > maxim)
            maxim = Tablou[i];
    return maxim;
}

// Funcție pentru a găsi valoarea minimă dintr-un tablou
int Gaseste_Minim(int Tablou[], int N) {
    int minim = Tablou[0];
    for (int i = 1; i < N; i++)
        if (Tablou[i] < minim)
            minim = Tablou[i];
    return minim;
}

// Funcție pentru a afișa elementele unui tablou
void Afiseaza(int Tablou[], int N) {
    for (int i = 0; i < N; i++)
        cout << Tablou[i] << ", ";
}

// Funcție pentru sortare folosind Counting Sort
int *Sortare_Counting(int Tablou[], int N) {
    int maxim = Gaseste_Maxim(Tablou, N);
    int minim = Gaseste_Minim(Tablou, N);
    int *Tablou_Sortat = new int[N];

    // Inițializare vector de frecvență
    int *Frecventa = new int[maxim - minim + 1];
    for (int i = 0; i < maxim - minim + 1; ++i) {
        Frecventa[i] = 0;
    }

    // Calcularea frecvențelor
    for (int i = 0; i < N; i++)
        Frecventa[Tablou[i] - minim]++;

    // Calcularea frecvențelor cumulate
    for (int i = 1; i < (maxim - minim + 1); i++)
        Frecventa[i] += Frecventa[i - 1];

    // Construirea tabloului sortat
    for (int i = N - 1; i >= 0; i--) {
        Tablou_Sortat[Frecventa[Tablou[i] - minim] - 1] = Tablou[i];
        Frecventa[Tablou[i] - minim]--;
    }

    delete[] Frecventa;
    return Tablou_Sortat;
}

int main() {
    int Tablou[] = {47, 65, 20, 66, 25, 53, 64, 69, 72, 22,
                    74, 25, 53, 15, 42, 36, 4,  69, 86, 19};
    int N = 20;
    int *Tablou_Sortat;

    cout << "\n\tTabloul Original = ";
    Afiseaza(Tablou, N);
    Tablou_Sortat = Sortare_Counting(Tablou, N);
    cout << "\n\tTabloul Sortat = ";
    Afiseaza(Tablou_Sortat, N);
    delete[] Tablou_Sortat;
    cout << endl;

    return 0;
}
