#include <iostream>
#include <vector>
 
using namespace std;
 
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
 
    vector<int> leftArr(n1), rightArr(n2);
 
    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        rightArr[j] = arr[mid + 1 + j];
 
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
 
void merge_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
 
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
 
        merge(arr, left, mid, right);
    }
}
 
int main() {
    int n;
    cout << "Introduceti numarul de elemente: ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Introduceti elementele: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
 
    merge_sort(arr, 0, n - 1);
 
    cout << "Array sortat: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
 
    return 0;
}
 
