// Radix Sort in C++ Programming
// Functia pentru a obtine elementul maxim dintr-un array
#include <bits/stdc++.h>
using namespace std;

int getMax(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

// Utilizand Counting Sort pentru a sorta elementele pe baza pozitiilor semnificative
void countingSort(int array[], int size, int place) {
    const int max = 10;
    int output[size];
    int count[max];

    // Initializam vectorul de contorizare cu 0
    for (int i = 0; i < max; ++i)
        count[i] = 0;

    // Calculam numarul de aparitii pentru fiecare cifra
    for (int i = 0; i < size; i++)
        count[(array[i] / place) % 10]++;

    // Calculam frecventa cumulativa
    for (int i = 1; i < max; i++)
        count[i] += count[i - 1];

    // Plasam elementele in ordinea sortata
    for (int i = size - 1; i >= 0; i--) {
        output[count[(array[i] / place) % 10] - 1] = array[i];
        count[(array[i] / place) % 10]--;
    }

    // Copiem rezultatul inapoi in array-ul original
    for (int i = 0; i < size; i++)
        array[i] = output[i];
}

// Functia principala pentru a implementa Radix Sort
void radixsort(int array[], int size) {
    // Obtinerea elementului maxim
    int max = getMax(array, size);

    // Aplicam Counting Sort pentru a sorta elementele pe baza valorilor pozitionale
    for (int place = 1; max / place > 0; place *= 10)
        countingSort(array, size, place);
}

// Functia pentru a afisa un array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Functia principala
int main() {
    int array[] = {121, 432, 564, 23, 1, 45, 788};
    int n = sizeof(array) / sizeof(array[0]);
    radixsort(array, n);
    printArray(array, n);
}