#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& sir, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);


    for (int i = 0; i < n1; i++)
        leftArray[i] = sir[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = sir[mid + 1 + j];


    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            sir[k] = leftArray[i];
            i++;
        } else {
            sir[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        sir[k] = leftArray[i];
        i++;
        k++;
    }


    while (j < n2) {
        sir[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& sir, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(sir, left, mid);
        mergeSort(sir, mid + 1, right);

        merge(sir, left, mid, right);
    }
}

int main() {
    int n;


    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    vector<int> sir(n);

    cout << "Introduceti " << n << " numere:\n";
    for (int i = 0; i < n; ++i) {
        cin >> sir[i];
    }


    mergeSort(sir, 0, n - 1);


    cout << "Numerele sortate sunt:\n";
    for (int i = 0; i < n; ++i) {
        cout << sir[i] << " ";
    }
    cout <<endl;

    return 0;
}
