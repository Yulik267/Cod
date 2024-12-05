#include <algorithm>
#include <cassert>
#include <iostream>

template <typename T>
void afisareVector(T *arr, int dim) {
    for (int i = 0; i < dim; i++) std::cout << arr[i] << "  ";
    std::cout << "\n";
}

template <typename T>
void heapify(T *arr, int dim, int i) {
    int celMaiMare = i;
    int stanga = 2 * i + 1;
    int dreapta = 2 * i + 2;

    if (stanga < dim && arr[stanga] > arr[celMaiMare])
        celMaiMare = stanga;

    if (dreapta < dim && arr[dreapta] > arr[celMaiMare])
        celMaiMare = dreapta;

    if (celMaiMare != i) {
        std::swap(arr[i], arr[celMaiMare]);
        heapify(arr, dim, celMaiMare);
    }
}

template <typename T>
void heapSort(T *arr, int dim) {
    for (int i = dim / 2 - 1; i >= 0; i--)
        heapify(arr, dim, i);

    for (int i = dim - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void teste() {
    std::cout << "Test 1\n";
    int arr[] = {-10, 78, -1, -6, 7, 4, 94, 5, 99, 0};
    int dim = sizeof(arr) / sizeof(arr[0]);
    afisareVector(arr, dim);  // afișare înainte de sortare
    heapSort(arr, dim);       // sortarea vectorului
    afisareVector(arr, dim);  // afișare după sortare
    assert(std::is_sorted(arr, arr + dim));
    std::cout << "Test 1 trecut\n========================\n";

    std::cout << "Test 2\n";
    double arr2[] = {4.5, -3.6, 7.6, 0, 12.9};
    dim = sizeof(arr2) / sizeof(arr2[0]);
    afisareVector(arr2, dim);
    heapSort(arr2, dim);
    afisareVector(arr2, dim);
    assert(std::is_sorted(arr2, arr2 + dim));
    std::cout << "Test 2 trecut\n";
}

// Funcția principală 
int main() {
    teste();
    return 0;
}
