// Implementarea algoritmului Quick Sort in C++
#include <bits/stdc++.h>
using namespace std;

// Functia de partitionare pentru a plasa pivotul in pozitia corecta
int partition(int arr[], int start, int end)
{
    // Alegem primul element ca pivot
    int pivot = arr[start];

    // Numaratoare pentru elementele mai mici sau egale cu pivotul
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Atribuim pivotului pozitia corecta in array
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sortam partile din stanga si din dreapta pivotului
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        // Cautam elemente care sunt mai mari decat pivotul
        while (arr[i] <= pivot) {
            i++;
        }

        // Cautam elemente care sunt mai mici decat pivotul
        while (arr[j] > pivot) {
            j--;
        }

        // Facem swap intre elementele din stanga si dreapta pivotului
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    // Returnam indicele pivotului pentru a folosi in recursivitate
    return pivotIndex;
}

// Functia Quick Sort pentru sortarea recursiva a array-ului
void quickSort(int arr[], int start, int end)
{
    // Caz de baza
    if (start >= end)
        return;

    // Partitionam array-ul
    int p = partition(arr, start, end);

    // Sortam partea din stanga a pivotului
    quickSort(arr, start, p - 1);

    // Sortam partea din dreapta a pivotului
    quickSort(arr, p + 1, end);
}

int main()
{
    // Initializam array-ul de sortat
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;

    // Aplicam Quick Sort pe array
    quickSort(arr, 0, n - 1);

    // Afisam array-ul sortat
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
