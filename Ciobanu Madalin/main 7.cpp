#include <iostream>
using namespace std;
void imbinare(int v[], int st, int mijloc, int dr) {
    int n1 = mijloc - st + 1;
    int n2 = dr - mijloc;
    int stLista[n1], drLista[n2];
      for (int i = 0; i < n1; i++)
        stLista[i] = v[st + i];
      for (int i = 0; i < n2; i++)
        drLista[i] = v[mijloc + 1 + i];
    int i = 0, j = 0, k = st;
    while (i < n1 && j < n2) {
        v[k++] = (stLista[i] <= drLista[j]) ? stLista[i++] : drLista[j++];
    }

    while (i < n1) v[k++] = stLista[i++];
    while (j < n2) v[k++] = drLista[j++];
}
void mergeSort(int v[], int st, int dr) {
    if (st < dr) {
        int mijloc = st + (dr - st) / 2;
        mergeSort(v, st, mijloc);
        mergeSort(v, mijloc + 1, dr);
        imbinare(v, st, mijloc, dr);
}
}
int main() {
    int n, v[100];
    cout << "Introduceti numarul de elemente (n): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
        }
     mergeSort(v, 0, n - 1);
    cout << "Vectorul sortat este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
return 0;
}



//Student: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
//Disciplina: Proiectarea Algoritmilor
